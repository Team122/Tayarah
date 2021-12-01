#ifndef REGISTER_H
#define REGISTER_H
#include "login.h"
#include <QMainWindow>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include "client.h"
namespace Ui {
class Register;
}

class Register : public QMainWindow
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_registerationButton_clicked();

private:
    Ui::Register *ui;
    Login loginWindow;
};

#endif // REGISTER_H
