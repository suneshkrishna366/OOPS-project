#include "mainwindowr.h"
#include "ui_mainwindowr.h"

MainWindowr::MainWindowr(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowr)
{
    ui->setupUi(this);
}

MainWindowr::~MainWindowr()
{
    delete ui;
}
