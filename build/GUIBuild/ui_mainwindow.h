/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *GB_NETWORK;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *LE_IP;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *textCmdPort;
    QPushButton *BTN_CONNECT_COM;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *textDataPort;
    QPushButton *BTN_CONNECT_DATA;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *LE_INIT_POWER;
    QLineEdit *LE_INIT_DEVICE;
    QLineEdit *LE_INIT_SYSTEM;
    QLineEdit *LE_INIT_ROBOT;
    QLineEdit *LE_INIT_STATUS;
    QPushButton *BTN_INITIALIZE;
    QGroupBox *GB_NETWORK_2;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *LE_IP_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *textROSPort;
    QLineEdit *textRSTPort;
    QLabel *label_7;
    QPushButton *BTN_CONNECT_ROS;
    QFrame *FRAME_STATUS;
    QFrame *FRAME_STATUS_2;
    QGroupBox *GB_NETWORK_3;
    QLineEdit *LE_DAEMON_PATH;
    QLabel *label_5;
    QPushButton *BTN_CHANGE_DAEMON;
    QLineEdit *LE_DAEMON_PID;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *BTN_START_DAEMON;
    QPushButton *BTN_STOP_DAEMON;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1341, 670);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GB_NETWORK = new QGroupBox(centralWidget);
        GB_NETWORK->setObjectName(QStringLiteral("GB_NETWORK"));
        GB_NETWORK->setGeometry(QRect(10, 10, 351, 161));
        QFont font;
        font.setPointSize(10);
        GB_NETWORK->setFont(font);
        GB_NETWORK->setLayoutDirection(Qt::LeftToRight);
        layoutWidget = new QWidget(GB_NETWORK);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 151, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        LE_IP = new QLineEdit(layoutWidget);
        LE_IP->setObjectName(QStringLiteral("LE_IP"));
        LE_IP->setMaximumSize(QSize(150, 16777215));
        LE_IP->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(LE_IP);

        layoutWidget1 = new QWidget(GB_NETWORK);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 60, 71, 91));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(9);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        textCmdPort = new QLineEdit(layoutWidget1);
        textCmdPort->setObjectName(QStringLiteral("textCmdPort"));
        textCmdPort->setEnabled(true);
        textCmdPort->setMaximumSize(QSize(100, 16777215));
        textCmdPort->setAlignment(Qt::AlignCenter);
        textCmdPort->setReadOnly(false);

        verticalLayout->addWidget(textCmdPort);

        BTN_CONNECT_COM = new QPushButton(layoutWidget1);
        BTN_CONNECT_COM->setObjectName(QStringLiteral("BTN_CONNECT_COM"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BTN_CONNECT_COM->sizePolicy().hasHeightForWidth());
        BTN_CONNECT_COM->setSizePolicy(sizePolicy);
        BTN_CONNECT_COM->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(BTN_CONNECT_COM);

        layoutWidget2 = new QWidget(GB_NETWORK);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(90, 60, 71, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        label_3->setFont(font2);
        label_3->setMouseTracking(false);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        textDataPort = new QLineEdit(layoutWidget2);
        textDataPort->setObjectName(QStringLiteral("textDataPort"));
        textDataPort->setEnabled(true);
        textDataPort->setMaximumSize(QSize(100, 16777215));
        textDataPort->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(textDataPort);

        BTN_CONNECT_DATA = new QPushButton(layoutWidget2);
        BTN_CONNECT_DATA->setObjectName(QStringLiteral("BTN_CONNECT_DATA"));
        sizePolicy.setHeightForWidth(BTN_CONNECT_DATA->sizePolicy().hasHeightForWidth());
        BTN_CONNECT_DATA->setSizePolicy(sizePolicy);
        BTN_CONNECT_DATA->setMinimumSize(QSize(0, 40));

        verticalLayout_2->addWidget(BTN_CONNECT_DATA);

        layoutWidget3 = new QWidget(GB_NETWORK);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(180, 30, 161, 121));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        LE_INIT_POWER = new QLineEdit(layoutWidget3);
        LE_INIT_POWER->setObjectName(QStringLiteral("LE_INIT_POWER"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LE_INIT_POWER->sizePolicy().hasHeightForWidth());
        LE_INIT_POWER->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(LE_INIT_POWER);

        LE_INIT_DEVICE = new QLineEdit(layoutWidget3);
        LE_INIT_DEVICE->setObjectName(QStringLiteral("LE_INIT_DEVICE"));
        sizePolicy1.setHeightForWidth(LE_INIT_DEVICE->sizePolicy().hasHeightForWidth());
        LE_INIT_DEVICE->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(LE_INIT_DEVICE);

        LE_INIT_SYSTEM = new QLineEdit(layoutWidget3);
        LE_INIT_SYSTEM->setObjectName(QStringLiteral("LE_INIT_SYSTEM"));
        sizePolicy1.setHeightForWidth(LE_INIT_SYSTEM->sizePolicy().hasHeightForWidth());
        LE_INIT_SYSTEM->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(LE_INIT_SYSTEM);

        LE_INIT_ROBOT = new QLineEdit(layoutWidget3);
        LE_INIT_ROBOT->setObjectName(QStringLiteral("LE_INIT_ROBOT"));
        sizePolicy1.setHeightForWidth(LE_INIT_ROBOT->sizePolicy().hasHeightForWidth());
        LE_INIT_ROBOT->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(LE_INIT_ROBOT);


        verticalLayout_4->addLayout(horizontalLayout_3);

        LE_INIT_STATUS = new QLineEdit(layoutWidget3);
        LE_INIT_STATUS->setObjectName(QStringLiteral("LE_INIT_STATUS"));
        LE_INIT_STATUS->setEnabled(true);
        LE_INIT_STATUS->setReadOnly(true);

        verticalLayout_4->addWidget(LE_INIT_STATUS);

        BTN_INITIALIZE = new QPushButton(layoutWidget3);
        BTN_INITIALIZE->setObjectName(QStringLiteral("BTN_INITIALIZE"));
        sizePolicy1.setHeightForWidth(BTN_INITIALIZE->sizePolicy().hasHeightForWidth());
        BTN_INITIALIZE->setSizePolicy(sizePolicy1);
        BTN_INITIALIZE->setFont(font);

        verticalLayout_4->addWidget(BTN_INITIALIZE);

        GB_NETWORK_2 = new QGroupBox(centralWidget);
        GB_NETWORK_2->setObjectName(QStringLiteral("GB_NETWORK_2"));
        GB_NETWORK_2->setGeometry(QRect(370, 10, 171, 161));
        GB_NETWORK_2->setFont(font);
        layoutWidget4 = new QWidget(GB_NETWORK_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 30, 151, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        LE_IP_2 = new QLineEdit(layoutWidget4);
        LE_IP_2->setObjectName(QStringLiteral("LE_IP_2"));
        LE_IP_2->setMaximumSize(QSize(150, 16777215));
        LE_IP_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(LE_IP_2);

        widget = new QWidget(GB_NETWORK_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 61, 151, 93));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        textROSPort = new QLineEdit(widget);
        textROSPort->setObjectName(QStringLiteral("textROSPort"));
        textROSPort->setEnabled(true);
        textROSPort->setMaximumSize(QSize(100, 16777215));
        textROSPort->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(textROSPort, 1, 0, 1, 1);

        textRSTPort = new QLineEdit(widget);
        textRSTPort->setObjectName(QStringLiteral("textRSTPort"));
        textRSTPort->setEnabled(true);
        textRSTPort->setMaximumSize(QSize(100, 16777215));
        textRSTPort->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(textRSTPort, 1, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        BTN_CONNECT_ROS = new QPushButton(widget);
        BTN_CONNECT_ROS->setObjectName(QStringLiteral("BTN_CONNECT_ROS"));
        sizePolicy1.setHeightForWidth(BTN_CONNECT_ROS->sizePolicy().hasHeightForWidth());
        BTN_CONNECT_ROS->setSizePolicy(sizePolicy1);
        BTN_CONNECT_ROS->setMinimumSize(QSize(0, 40));

        verticalLayout_3->addWidget(BTN_CONNECT_ROS);

        FRAME_STATUS = new QFrame(centralWidget);
        FRAME_STATUS->setObjectName(QStringLiteral("FRAME_STATUS"));
        FRAME_STATUS->setGeometry(QRect(770, 30, 550, 600));
        FRAME_STATUS->setFrameShape(QFrame::StyledPanel);
        FRAME_STATUS->setFrameShadow(QFrame::Raised);
        FRAME_STATUS_2 = new QFrame(centralWidget);
        FRAME_STATUS_2->setObjectName(QStringLiteral("FRAME_STATUS_2"));
        FRAME_STATUS_2->setGeometry(QRect(10, 180, 750, 450));
        FRAME_STATUS_2->setFrameShape(QFrame::StyledPanel);
        FRAME_STATUS_2->setFrameShadow(QFrame::Raised);
        GB_NETWORK_3 = new QGroupBox(centralWidget);
        GB_NETWORK_3->setObjectName(QStringLiteral("GB_NETWORK_3"));
        GB_NETWORK_3->setGeometry(QRect(550, 10, 211, 161));
        GB_NETWORK_3->setFont(font);
        LE_DAEMON_PATH = new QLineEdit(GB_NETWORK_3);
        LE_DAEMON_PATH->setObjectName(QStringLiteral("LE_DAEMON_PATH"));
        LE_DAEMON_PATH->setGeometry(QRect(10, 50, 141, 21));
        label_5 = new QLabel(GB_NETWORK_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 30, 101, 23));
        BTN_CHANGE_DAEMON = new QPushButton(GB_NETWORK_3);
        BTN_CHANGE_DAEMON->setObjectName(QStringLiteral("BTN_CHANGE_DAEMON"));
        BTN_CHANGE_DAEMON->setGeometry(QRect(150, 40, 51, 31));
        QFont font3;
        font3.setPointSize(8);
        BTN_CHANGE_DAEMON->setFont(font3);
        LE_DAEMON_PID = new QLineEdit(GB_NETWORK_3);
        LE_DAEMON_PID->setObjectName(QStringLiteral("LE_DAEMON_PID"));
        LE_DAEMON_PID->setEnabled(false);
        LE_DAEMON_PID->setGeometry(QRect(150, 70, 51, 21));
        LE_DAEMON_PID->setReadOnly(true);
        layoutWidget5 = new QWidget(GB_NETWORK_3);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 100, 191, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        BTN_START_DAEMON = new QPushButton(layoutWidget5);
        BTN_START_DAEMON->setObjectName(QStringLiteral("BTN_START_DAEMON"));
        sizePolicy.setHeightForWidth(BTN_START_DAEMON->sizePolicy().hasHeightForWidth());
        BTN_START_DAEMON->setSizePolicy(sizePolicy);
        BTN_START_DAEMON->setFont(font);

        horizontalLayout_4->addWidget(BTN_START_DAEMON);

        BTN_STOP_DAEMON = new QPushButton(layoutWidget5);
        BTN_STOP_DAEMON->setObjectName(QStringLiteral("BTN_STOP_DAEMON"));
        sizePolicy.setHeightForWidth(BTN_STOP_DAEMON->sizePolicy().hasHeightForWidth());
        BTN_STOP_DAEMON->setSizePolicy(sizePolicy);
        BTN_STOP_DAEMON->setFont(font);

        horizontalLayout_4->addWidget(BTN_STOP_DAEMON);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        GB_NETWORK->setTitle(QApplication::translate("MainWindow", "RB5 Connection", 0));
        label->setText(QApplication::translate("MainWindow", "RB5 IP", 0));
        LE_IP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        label_2->setText(QApplication::translate("MainWindow", "CMD PORT", 0));
        textCmdPort->setText(QApplication::translate("MainWindow", "5000", 0));
        BTN_CONNECT_COM->setText(QApplication::translate("MainWindow", "Connect", 0));
        label_3->setText(QApplication::translate("MainWindow", "DATA PORT", 0));
        textDataPort->setText(QApplication::translate("MainWindow", "5001", 0));
        BTN_CONNECT_DATA->setText(QApplication::translate("MainWindow", "Connect", 0));
        BTN_INITIALIZE->setText(QApplication::translate("MainWindow", "RB5\n"
"Initialize", 0));
        GB_NETWORK_2->setTitle(QApplication::translate("MainWindow", "ROS Connection", 0));
        label_4->setText(QApplication::translate("MainWindow", "ROS IP", 0));
        LE_IP_2->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        label_6->setText(QApplication::translate("MainWindow", "ROS PORT", 0));
        textROSPort->setText(QApplication::translate("MainWindow", "4000", 0));
        textRSTPort->setText(QApplication::translate("MainWindow", "4001", 0));
        label_7->setText(QApplication::translate("MainWindow", "RST PORT", 0));
        BTN_CONNECT_ROS->setText(QApplication::translate("MainWindow", "Open", 0));
        GB_NETWORK_3->setTitle(QApplication::translate("MainWindow", "CAN Connection", 0));
        label_5->setText(QApplication::translate("MainWindow", "DAEMON PATH", 0));
        BTN_CHANGE_DAEMON->setText(QApplication::translate("MainWindow", "Change\n"
"Daemon", 0));
        BTN_START_DAEMON->setText(QApplication::translate("MainWindow", "Start\n"
"Daemon", 0));
        BTN_STOP_DAEMON->setText(QApplication::translate("MainWindow", "Stop\n"
"Daemon", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
