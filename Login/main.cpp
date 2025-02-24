#include "mainwindow.h"

#include <QApplication>

#include <QFile>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    // Set the app style sheet
    QFile styleSheetFile("./Devsion.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    app.setStyleSheet(styleSheet);

    MainWindow w;
    w.show();
    return app.exec();
}
