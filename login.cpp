#include "login.h"
#include "ui_login.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->loginPassword->setPlaceholderText("Enter Your Password");
    ui->loginEmail->setPlaceholderText("Enter Your Email");
}

Login::~Login()
{
    delete ui;
}

void Login::on_loginButton_clicked()
{
    QFile clientInfo("/Users/amna_elsaqa/Desktop/QTProjects/Tayarah/registration.txt");
    QString e , p, first, last, num;
    if(!clientInfo.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::warning(this,"title","file not open");
    QTextStream in(&clientInfo);

    while(!in.atEnd()){
    in >> e >> p >> first >> last >> num;
    if(ui->loginEmail->text() == e && ui->loginPassword->text() == p){
        ui->status->setText("Successful Login");
        fname = first.toStdString();
        lname = last.toStdString();
        phoneNum = num.toStdString();
    }
}
    clientInfo.close();

    categoryWindow.show();
    this->close();
}

