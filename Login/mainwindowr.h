#ifndef MAINWINDOWR_H
#define MAINWINDOWR_H

#include <QMainWindow>

namespace Ui {
class MainWindowr;
}

class MainWindowr : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowr(QWidget *parent = nullptr);
    ~MainWindowr();

private:
    Ui::MainWindowr *ui;
};

#endif // MAINWINDOWR_H
