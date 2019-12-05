#include "ROSconnect.h"

ROSconnect::ROSconnect()
{
    sendTimer = new QTimer(this);
    ROSflag = false;
}

ROSconnect::~ROSconnect()
{
    printf("delete ROSconnect\n");
    if(ROSflag == true)
    {
        delete serverROS;
        ROSflag = false;
    }
}

void ROSconnect::Connect(int _rosport, int _rstport)
{
    serverROS = new ROSServer();
    serverROS->RBServerOpen(QHostAddress::AnyIPv4, _rosport);
    serverRST = new RSTServer();
    serverRST->RBServerOpen(QHostAddress::AnyIPv4, _rstport);
    ROSflag = true;
    connect(serverROS, SIGNAL(SIG_NewConnection()), this, SLOT(ROSConnected()));
    connect(serverROS, SIGNAL(SIG_DisConnected()), this, SLOT(ROSDisconnected()));
    connect(serverRST, SIGNAL(SIG_NewConnection()), this, SLOT(RSTConnected()));
    connect(serverRST, SIGNAL(SIG_DisConnected()), this, SLOT(RSTDisconnected()));
    connect(serverROS, SIGNAL(ROS_UPDATE(char*)), this, SLOT(readCMD(char*)));
}

void ROSconnect::Disconnect()
{
    if(ROSflag == true)
    {
        delete serverROS;
        delete serverRST;
        ROSflag = false;
    }
}

void ROSconnect::ROSConnected()
{
    connect(sendTimer, SIGNAL(timeout()), this, SLOT(sendSTATUS()));
    sendTimer->start(100);
    emit ROS_Connected();
}

void ROSconnect::ROSDisconnected()
{
    sendTimer->stop();
    if(!serverROS->isListening())
        emit ROS_Disconnected();
}

void ROSconnect::RSTConnected()
{
    emit RST_Connected();
}

void ROSconnect::RSTDisconnected()
{
    if(!serverRST->isListening())
        emit RST_Disconnected();
}

void ROSconnect::readCMD(char *_data)
{
    printf("readCMD\n");
    memcpy(&data, _data, serverROS->RXSize);
    emit ROS_CMD_READ(data);
}

void ROSconnect::sendSTATUS()
{
    char *buf = new char[sizeof(RB5toROS)];
    memcpy(buf, &rb5toros, sizeof(RB5toROS));
    serverROS->RBSendData(buf, sizeof(RB5toROS));
    delete [] buf;
}

void ROSconnect::sendRB5RESULT(int rst)
{
    result.rb5_result = rst;
    printf("RB5RESULT set : %d,%d\n",result.rb5_result,result.wheel_result);
    char *buf = new char[sizeof(Result)];
    memcpy(buf, &result, sizeof(Result));
    serverRST->RBSendData(buf, sizeof(Result));
    delete [] buf;
}
void ROSconnect::sendWHEELRESULT(int rst)
{
    result.wheel_result = rst;
    printf("RB5RESULT set : %d,%d\n",rb5toros.result.rb5_result,rb5toros.result.wheel_result);
    char *buf = new char[sizeof(Result)];
    memcpy(buf, &result, sizeof(Result));
    serverRST->RBSendData(buf, sizeof(Result));
    delete [] buf;
}


void ROSconnect::RESULTreset()
{
    rb5toros.result.rb5_result = BREAK;
    rb5toros.result.wheel_result = BREAK;
    printf("result reset\n");
}

ROSServer::ROSServer()
{
    TXSize = sizeof(Update);
    RXSize = sizeof(command);
    data = new char[RXSize];
}

ROSServer::~ROSServer()
{
    printf("delete ROSserver\n");
    if(RBConnectionState == RBLAN_CS_CONNECTED)
        RBTcpClient->abort();
    RBTcpServer->close();
}

void ROSServer::ReadData()
{
    if(RBTcpClient->bytesAvailable() < RXSize)
        return;

    RBTcpClient->read(data, RXSize);
    emit ROS_UPDATE(data);
}

RSTServer::RSTServer()
{
    TXSize = sizeof(Result);
}

RSTServer::~RSTServer()
{
    printf("delete RSTserver\n");
    if(RBConnectionState == RBLAN_CS_CONNECTED)
        RBTcpClient->abort();
    RBTcpServer->close();
}

void RSTServer::ReadData()
{

}
