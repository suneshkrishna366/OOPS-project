#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindowr.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString UserName = ui->lineEdit_User_Name->text();
    QString Password = ui->lineEdit_Password->text();
    if(UserName =="SuneshKrishna"&&Password=="123"){
        QMessageBox::information(this,"Sunesh Krishna","Login success.");
        this->hide();
        MainPage *mainpage = new MainPage();
        MainWindowr *mainwindowr = new MainWindowr();
        mainpage->show();
        QTimer::singleShot(5000,mainpage,&MainPage::close);
        mainwindowr->show();


    }
    else{
        QMessageBox::warning(this,"Habit Tracker","Enter valid Username or Password");
    }
}


void MainWindow::on_pushButton_Cancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Habit Tracker","Are you sure to close the application?",QMessageBox::Yes| QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    }
}

