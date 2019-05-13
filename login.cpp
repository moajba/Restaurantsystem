#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
#include "dbmanger.h"
#include "QtSql/QSqlDatabase"
#include "QtSql"
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

}

Login::~Login()
{
    delete ui;
}


void Login::on_btn_login_clicked()
{
    /*
    QString serverNam=".\\SQLEXPRESS";
    QString dbname="Rersturant";
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC3");
    db.setConnectOptions();
    db.setDatabaseName("DRIVER={SQL Server Native Client 11.0};SERVER=localhost\\SQLExpress;DATABASE=Rersturant;UID=;PWD=;WSID=.;Trusted_connection=yes");

     db.open();
    QSqlQueryModel *model = new QSqlQueryModel;
                QString query = "insert into users values (6,'ssd' , '12ddd4' , 'moh' , 'muenchen');";
               model->setQuery(query, db);

    db.close();
*/
        DbManger dm ;
        QString count ;
        count = dm.GetDataString("select max (id)+1 from mitarbeiter");
        QMessageBox::about(this , "Title" ,count);
      //  ui->label_2->text() = (dm.GetDataString("select count(id) from Mitarbeiter "));
}

int Dconnect(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("LOCALHOST\\SQLEXPRESS");
    db.setDatabaseName("Rersturant");
    db.setUserName("Abdul");
    db.setPassword("");

    int a ;
    if(db.open()){
            a = 1;
    }
    else {
           a = 1;
    }
    return a;
}
