#ifndef CLOTHING_H
#define CLOTHING_H

#include <QMainWindow>
#include "productspecs.h"
#include<vector>
namespace Ui {
class Clothing;
}

class Clothing : public QMainWindow, public ProductSpecs
{
    Q_OBJECT

public:
    explicit Clothing(QWidget *parent = nullptr);
    ~Clothing();
    void setColor(QString);
    string getColor();
    void setSize(char);
    char getSize();
    void setGender(QString);
    QString getGender();
    void readProducts();
    void displayClothes(vector<Clothing>);
private:
    Ui::Clothing *ui;
    QString color;
    char size;
    QString gender;
};

#endif // CLOTHING_H
