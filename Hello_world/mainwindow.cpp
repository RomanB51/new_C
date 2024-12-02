#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Ромик привет");
    setStyleSheet("background-color:green");
}

MainWindow::~MainWindow()
{
    delete ui;
}
