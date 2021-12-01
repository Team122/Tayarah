#include "register.h"
#include "ui_register.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include <iostream>
using namespace std;
Register::Register(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->firstNameEntered->setPlaceholderText("Enter Your First Name");
    ui->lastNameEntered->setPlaceholderText("Enter Your Last Name");
    ui->emailEntered->setPlaceholderText("Enter Your Email");
    ui->passwordEntered->setPlaceholderText("Enter Your Password");

}

Register::~Register()
{
    delete ui;
}

void Register::on_registerationButton_clicked()
{
    QFile clientInfo("/Users/amna_elsaqa/Desktop/QTProjects/Tayarah/registration.txt");

    if(!clientInfo.open(QFile::WriteOnly | QIODevice::Append))
        QMessageBox::warning(this,"title","file not open");
    QTextStream out(&clientInfo);
    out << ui->emailEntered->text() << " " << ui->passwordEntered->text() << " " << ui->firstNameEntered->text() << " " << ui->lastNameEntered->text() << " " << ui->numEntered->text() << "\n";
    clientInfo.flush();
    clientInfo.close();

    loginWindow.show();
    this->close();
    QMessageBox::information(this,"title","Registration Successful! You'll be redirected to login");
}

