#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qInfo("Window created");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_snapButton_clicked()
{
    Screenshot::takeScreenshot();
}

