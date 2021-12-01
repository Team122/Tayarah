#include "category.h"
#include "ui_category.h"

Category::Category(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Category)
{
    ui->setupUi(this);
    QPixmap pix("/Users/amna_elsaqa/Desktop/QTProjects/Tayarah/clothing image.jpg");
    ui->clothingLabel->setPixmap(pix.scaled(200,200,Qt::KeepAspectRatio));
    QPixmap pix2("/Users/amna_elsaqa/Desktop/QTProjects/Tayarah/groceries image.jpg");
    ui->groceryLabel->setPixmap(pix2.scaled(200,200,Qt::KeepAspectRatio));
    QPixmap pix3("/Users/amna_elsaqa/Desktop/QTProjects/Tayarah/Toys image.jpg");
    ui->toysLabel->setPixmap(pix3.scaled(200,200,Qt::KeepAspectRatio));
    QPixmap pix4("/Users/amna_elsaqa/Desktop/QTProjects/Tayarah/laptop image.jpg");
    ui->laptopLabel->setPixmap(pix4.scaled(200,200,Qt::KeepAspectRatio));
}

Category::~Category()
{
    delete ui;
}


void Category::on_clothingButton_clicked()
{
    clothingWindow.show();
    this->close();
}

