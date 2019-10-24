#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include "StatusDialog.h"
#include "CANDialog.h"
#include "LAN/CANconnect.h"
#include "LAN/RB5connect.h"
#include "LAN/ROSconnect.h"

#include <QVector>
#include <QtAlgorithms>
#include <QDebug>
#include <QSystemTrayIcon>
#include <QFileDialog>
#include <QThread>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    StatusDialog    *statusDialog;
    CANDialog       *canDialog;

    CANconnect      *CAN;   //Connect to Daemon with SharedMemory
    RB5connect      *RB5;   //Connect to RB5 (send Command, receive Status)
    ROSconnect      *ROS;   //Connect to ROS (send Status, receive Command)

    QTimer systemTimer;     //update data on display (onSystemCheck)

public slots:
    void onSystemCheck();

    void onCmdConnected();
    void onCmdDisconnected();
    void onDataConnected();
    void onDataDisconnected();
    void onROSConnected();
    void onROSDisconnected();
    void onRSTConnected();
    void onRSTDisconnected();

    void setCommand(command _cmd);
    void RB5toROS();

    void on_BTN_CONNECT_COM_clicked();
    void on_BTN_CONNECT_DATA_clicked();
    void on_BTN_CONNECT_ROS_clicked();

private slots:
    void on_BTN_INITIALIZE_clicked();

    void on_BTN_CHANGE_DAEMON_clicked();

    void on_BTN_START_DAEMON_clicked();

    void on_BTN_STOP_DAEMON_clicked();

    void on_showNormal();

private:
    Ui::MainWindow *ui;

    qint64  Daemon_processID;
    QString settingFile;
    QAction         *restoreAction, *quitAction;
    QAction *startDaemonAction, *stopDaemonAction;

    void createActions();
    int checkJointInput();
    int checkTCPInput();

    int initFlag;
    int resultFlag;
    int Count;
    command ROScommand;
};

#endif // MAINWINDOW_H
