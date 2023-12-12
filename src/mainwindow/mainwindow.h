#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "screenshot.h"

namespace Ui
{ class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void on_snapButton_clicked();

    private:
        Ui::MainWindow *ui;
        Screenshot *screenshot;
};
#endif // MAINWINDOW_H
