/********************************************************************************
** Form generated from reading UI file 'mainwindowr.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWR_H
#define UI_MAINWINDOWR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowr
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *MainWindowr)
    {
        if (MainWindowr->objectName().isEmpty())
            MainWindowr->setObjectName("MainWindowr");
        MainWindowr->resize(800, 600);
        centralwidget = new QWidget(MainWindowr);
        centralwidget->setObjectName("centralwidget");
        MainWindowr->setCentralWidget(centralwidget);

        retranslateUi(MainWindowr);

        QMetaObject::connectSlotsByName(MainWindowr);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowr)
    {
        MainWindowr->setWindowTitle(QCoreApplication::translate("MainWindowr", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowr: public Ui_MainWindowr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWR_H
