/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_User_Name;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Cancel;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_7;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuHABIT_TRACKER;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 140, 131, 51));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 190, 131, 51));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_User_Name = new QLineEdit(centralwidget);
        lineEdit_User_Name->setObjectName("lineEdit_User_Name");
        lineEdit_User_Name->setGeometry(QRect(220, 150, 200, 35));
        lineEdit_Password = new QLineEdit(centralwidget);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setGeometry(QRect(220, 200, 200, 34));
        lineEdit_Password->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_Login = new QPushButton(centralwidget);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(150, 260, 91, 31));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        pushButton_Login->setFont(font1);
        pushButton_Cancel = new QPushButton(centralwidget);
        pushButton_Cancel->setObjectName("pushButton_Cancel");
        pushButton_Cancel->setGeometry(QRect(310, 260, 91, 31));
        pushButton_Cancel->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 60, 121, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century")});
        font2.setPointSize(20);
        font2.setBold(true);
        label_4->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 110, 211, 16));
        QFont font3;
        font3.setBold(false);
        label_5->setFont(font3);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 20, 121, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Century")});
        font4.setPointSize(12);
        font4.setBold(true);
        label_6->setFont(font4);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 340, 49, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 310, 661, 271));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/WhatsApp Image 2025-02-24 at 09.04.00_c1e7036c.jpg")));
        label_7->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuHABIT_TRACKER = new QMenu(menubar);
        menuHABIT_TRACKER->setObjectName("menuHABIT_TRACKER");
        QFont font5;
        font5.setBold(true);
        menuHABIT_TRACKER->setFont(font5);
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuHABIT_TRACKER->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "USER NAME :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PASSWORD:", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("MainWindow", "CANCEL", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "ENTER USERNAME AND PASSWORD:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "FIRSTLY,", nullptr));
        label_3->setText(QString());
        label_7->setText(QString());
        menuHABIT_TRACKER->setTitle(QCoreApplication::translate("MainWindow", "HABIT TRACKER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
