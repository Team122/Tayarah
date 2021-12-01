#ifndef CATEGORY_H
#define CATEGORY_H

#include <QMainWindow>
#include "clothing.h"
namespace Ui {
class Category;
}

class Category : public QMainWindow
{
    Q_OBJECT

public:
    explicit Category(QWidget *parent = nullptr);
    ~Category();

private slots:
    void on_clothingButton_clicked();

private:
    Ui::Category *ui;
    Clothing clothingWindow;
};

#endif // CATEGORY_H
