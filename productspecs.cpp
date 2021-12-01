#include "productspecs.h"
#include<QString>
ProductSpecs::ProductSpecs()
{

}

void ProductSpecs::setName(QString x){
    name=x.toStdString();
}
string ProductSpecs::getName(){
    return name;
}

void ProductSpecs::setBrand(QString x){
    brand=x.toStdString();
}
string ProductSpecs::getBrand(){
    return brand;
}

void ProductSpecs::setID(QString x){
    ID=x.toStdString();
}
string ProductSpecs::getID(){
    return ID;
}

void ProductSpecs::setStatus(int x){
    status=x;
}
bool ProductSpecs::getStatus(){
    return status;
}

void ProductSpecs::setRating(float x){
    rating=x;
}
float ProductSpecs::getRating(){
    return rating;
}

void ProductSpecs::setLocation(QString x){
    location=x.toStdString();
}
string ProductSpecs::getLocation(){
    return location;
}

void ProductSpecs::setImagePath(QString x){
    imagePath=x.toStdString();
}
string ProductSpecs::getImagePath(){
    return imagePath;
}




