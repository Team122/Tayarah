#ifndef PRODUCTSPECS_H
#define PRODUCTSPECS_H
#include<QString>
#include<string>
using namespace std;

class ProductSpecs
{
public:
    ProductSpecs();
    void setBrand(QString);
    string getBrand();
    void setName(QString);
    string getName();
    void setID(QString);
    string getID();
    void setRating(float);
    float getRating();
    void setPrice(int);
    void setLocation(QString);
    string getLocation();
    void setStatus(int);
    bool getStatus();
    void setImagePath(QString);
    string getImagePath();

protected:
    string name;
    int price;
    bool status;
    float rating;
    string location;
    string ID;
    string imagePath;
    string brand;
};

#endif // PRODUCTSPECS_H
