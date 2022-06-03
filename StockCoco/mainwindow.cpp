#include "mainwindow.h"
#include "ui_mainwindow.h"
//debug include
#include <qdebug.h>
//SQL includes
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/qsqlerror.h>
#include <QSqlQueryModel>


//user variables//
QSqlDatabase db;
QSqlQuery auxQuery;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/lucho/Documentos/DBs/stock.db");

    if(!db.open()){
        qDebug() << "dentro del boton Cargar BAse:" + db.lastError().text();
    }
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}


void MainWindow::on_btnCarrito_clicked()
{
    ui->tabFrameGeneral->setCurrentIndex(0);
    //ui->tabCarrito->
}


void MainWindow::on_btnEditar_clicked()
{
    ui->tabFrameGeneral->setCurrentIndex(2);
}


void MainWindow::on_btnStock_clicked()
{
    ui->tabFrameGeneral->setCurrentIndex(1);
}

void MainWindow::on_btnUpdateTableStock_clicked()
{
    QSqlQueryModel * modal=new QSqlQueryModel();

    QSqlQuery query;

    QString consulta = "SELECT * FROM stock";

    if (ui->edtTxtFiltro->text() != ""){
        consulta += " WHERE " + ui->cmbFiltro->currentText() + " LIKE \'%" + ui->edtTxtFiltro->text() + "%\'";
    }

    query.exec(consulta);

    modal->setQuery(query);
    ui->tableView->setModel(modal);
    ui->tableView->resizeRowsToContents();

    qDebug() << consulta;
    qDebug() << (modal->rowCount());

}


void MainWindow::on_btnCleanFiltro_clicked()
{
    ui->edtTxtFiltro->setText("");

    QSqlQueryModel * modal=new QSqlQueryModel();

    QSqlQuery query;

    query.exec("SELECT * FROM stock");

    modal->setQuery(query);
    ui->tableView->setModel(modal);
    ui->tableView->resizeRowsToContents();

}

