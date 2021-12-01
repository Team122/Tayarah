#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/Users/amna_elsaqa/Desktop/QTProjects/Tayarah/TayarahImage.PNG");
    ui->imageLabel->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_regsiterButton_clicked()
{
    registrationWindow.show();
    this->close();
}


void MainWindow::on_loginButton_clicked()
{
    loginWindow.show();
    this->close();
}

