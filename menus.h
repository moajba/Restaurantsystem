#ifndef MENUS_H
#define MENUS_H

#include <QDialog>

namespace Ui {
class Menus;
}

class Menus : public QDialog
{
    Q_OBJECT

public:
    explicit Menus(QWidget *parent = nullptr);
    ~Menus();

private slots:




    void on_Menus_accepted();

    void on_btnFoods_clicked();

    void on_btn_drinks_clicked();

    void on_pushButton_25_clicked();

private:
    Ui::Menus *ui;
};

#endif // MENUS_H
