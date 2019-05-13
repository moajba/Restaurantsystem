#include "menus.h"
#include "ui_menus.h"
#include "dbmanger.h"


Menus::Menus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menus)
{
    ui->setupUi(this);
}

Menus::~Menus()
{
    delete ui;
}

void Menus::on_Menus_accepted()
{
    ui ->frm1->setHidden(true); //to show the frame foods
    ui->frm2->setHidden(false);//to hide the frame dri
     QDateTime dt ;
     dt.date();
    ui->labl_date->setText(  QTime::currentTime().toString());
}

void Menus::on_btnFoods_clicked()
{
    DbManger db ;
    ui->labl_date->setText(  QTime::currentTime().toString() + "  " +QDate::currentDate().toString());
    // db.GetData("select *from mitarbeiter" , ui->listView);
     //ui->listView->showRow(1);
     ui ->frm1->setHidden(false); //to show the frame foods
     ui->frm2->setHidden(true);//to hide the frame drinks
    /*
    db.IsOpend();
    db.ConnectSql();
    QSqlQueryModel *model = new QSqlQueryModel;
   // QSqlQuery *qry = new QSqlQuery();
   // qry->prepare("select  *from users");
    //qry->exec();
    QString Sqlstatment = "select  *from users";
    model ->setQuery(Sqlstatment ,db.db);
    ui -> tblView ->setModel(model);
    db.IsClosed();
*/
    //ui ->frm1->setHidden(true); //to show the frame foods
    //ui->frm2->setHidden(false);//to hide the frame drinks
}

void Menus::on_btn_drinks_clicked()
{
    ui ->frm1->setHidden(true); //to show the frame foods
    ui->frm2->setHidden(false);//to hide the frame drinks
}

void Menus::on_pushButton_25_clicked()
{
   // QListWidgetItem *item =  new QListWidgetItem("12" , "supper");
    ui->listWidget->addItem("suppe                                                                                     10 $");
}
