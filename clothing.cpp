#include "clothing.h"
#include "ui_clothing.h"
#include<QString>
#include<string>
#include<QFile>
#include<QMessageBox>
#include<QTextStream>
#include<vector>

Clothing::Clothing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Clothing)
{
    ui->setupUi(this);

}


Clothing::~Clothing()
{
    delete ui;
}

void Clothing:: readProducts(){
    vector <Clothing> v[3];
    Clothing temp;
    QFile clothingProducts("/Users/amna_elsaqa/Desktop/QTProjects/Tayarah/clothing.txt");
    QString n , c, g , id , p , stat, img;
    char s;

    if(!clothingProducts.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::warning(this,"title","file not open");
    QTextStream in(&clothingProducts);

    while(!in.atEnd()){
    in >> n >> c >> g >> s >> p >> id >> img;
    temp.setName(n);
    temp.setColor(c);
    temp.setGender(g);
    temp.setSize(s);
    temp.setPrice(p.toInt());
    temp.setImagePath(img);
    temp.setID(id);
    v->push_back(temp);
}

}

void Clothing::displayClothes(vector<Clothing> x){
    string str = x[0].imagePath;
    QPixmap pix(str);
    ui->label1Image->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));
}
