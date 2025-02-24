/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QLabel *welcome;
    QLabel *welcome_2;
    QLabel *welcome_3;
    QLabel *welcome_4;
    QLabel *label;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(800, 600);
        MainPage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color:rgb(52,50,64);\n"
"	color:white;\n"
"}"));
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        welcome = new QLabel(centralwidget);
        welcome->setObjectName("welcome");
        welcome->setGeometry(QRect(50, 60, 181, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Jokerman")});
        font.setPointSize(24);
        font.setBold(true);
        font.setUnderline(true);
        font.setKerning(true);
        welcome->setFont(font);
        welcome_2 = new QLabel(centralwidget);
        welcome_2->setObjectName("welcome_2");
        welcome_2->setGeometry(QRect(210, 170, 81, 111));
        welcome_2->setFont(font);
        welcome_3 = new QLabel(centralwidget);
        welcome_3->setObjectName("welcome_3");
        welcome_3->setGeometry(QRect(250, 280, 331, 111));
        welcome_3->setFont(font);
        welcome_4 = new QLabel(centralwidget);
        welcome_4->setObjectName("welcome_4");
        welcome_4->setGeometry(QRect(460, 390, 251, 111));
        welcome_4->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 530, 491, 31));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainPage->setCentralWidget(centralwidget);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "MainWindow", nullptr));
        welcome->setText(QCoreApplication::translate("MainPage", "WELCOME", nullptr));
        welcome_2->setText(QCoreApplication::translate("MainPage", "TO", nullptr));
        welcome_3->setText(QCoreApplication::translate("MainPage", "HABIT TRACKING", nullptr));
        welcome_4->setText(QCoreApplication::translate("MainPage", "APPLICATION", nullptr));
        label->setText(QCoreApplication::translate("MainPage", "\"WHERE WE HELP TO MAKE YOUR DREAMS COME TRUE\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
