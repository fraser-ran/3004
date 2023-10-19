/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QSpinBox *FloorBox_line;
    QPushButton *floorPushButton;
    QLCDNumber *FloorNumDisp;
    QPushButton *OpenButton;
    QPushButton *CloseButton;
    QPushButton *BlockButton;
    QPushButton *ClearButton;
    QPushButton *servButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 191, 161));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 181, 17));
        FloorBox_line = new QSpinBox(groupBox);
        FloorBox_line->setObjectName(QString::fromUtf8("FloorBox_line"));
        FloorBox_line->setGeometry(QRect(20, 50, 45, 41));
        floorPushButton = new QPushButton(groupBox);
        floorPushButton->setObjectName(QString::fromUtf8("floorPushButton"));
        floorPushButton->setGeometry(QRect(80, 50, 80, 51));
        FloorNumDisp = new QLCDNumber(groupBox);
        FloorNumDisp->setObjectName(QString::fromUtf8("FloorNumDisp"));
        FloorNumDisp->setGeometry(QRect(40, 110, 64, 23));
        FloorNumDisp->setStyleSheet(QString::fromUtf8("QLCDNumber{\n"
"background-color: darkblue\n"
"\n"
"}"));
        OpenButton = new QPushButton(centralwidget);
        OpenButton->setObjectName(QString::fromUtf8("OpenButton"));
        OpenButton->setGeometry(QRect(270, 50, 121, 61));
        CloseButton = new QPushButton(centralwidget);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setGeometry(QRect(400, 50, 111, 61));
        BlockButton = new QPushButton(centralwidget);
        BlockButton->setObjectName(QString::fromUtf8("BlockButton"));
        BlockButton->setGeometry(QRect(270, 130, 121, 51));
        ClearButton = new QPushButton(centralwidget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));
        ClearButton->setGeometry(QRect(400, 130, 111, 51));
        servButton = new QPushButton(centralwidget);
        servButton->setObjectName(QString::fromUtf8("servButton"));
        servButton->setGeometry(QRect(90, 260, 171, 91));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        servButton->setFont(font);
        servButton->setStyleSheet(QString::fromUtf8("background-color: red\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(floorPushButton, SIGNAL(clicked()), MainWindow, SLOT(setFocus()));
        QObject::connect(OpenButton, SIGNAL(clicked()), MainWindow, SLOT(setFocus()));
        QObject::connect(CloseButton, SIGNAL(clicked()), MainWindow, SLOT(setFocus()));
        QObject::connect(BlockButton, SIGNAL(clicked()), MainWindow, SLOT(setFocus()));
        QObject::connect(ClearButton, SIGNAL(clicked()), MainWindow, SLOT(setFocus()));
        QObject::connect(servButton, SIGNAL(clicked()), MainWindow, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Floor Button Panel", nullptr));
        label->setText(QApplication::translate("MainWindow", "Please Insert Floor number", nullptr));
        floorPushButton->setText(QApplication::translate("MainWindow", "Go to Floor", nullptr));
        OpenButton->setText(QApplication::translate("MainWindow", "Open Doors", nullptr));
        CloseButton->setText(QApplication::translate("MainWindow", "Close Doors", nullptr));
        BlockButton->setText(QApplication::translate("MainWindow", "Block Door", nullptr));
        ClearButton->setText(QApplication::translate("MainWindow", "Clear Doorway", nullptr));
        servButton->setText(QApplication::translate("MainWindow", "Building Services", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
