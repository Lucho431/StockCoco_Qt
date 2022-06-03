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
//SQL variables
QSqlDatabase db;
QSqlQuery auxQuery;
//general variables
QString itemIndex;
T_ITEM_STOCK itemSelecto;
char texto[10];
uint8_t flag_itemSelecto = 0;


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

    //qDebug() << consulta;
    //qDebug() << (modal->rowCount());

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
    flag_itemSelecto = 0;
    ui->edtTxtCant->setDisabled(true);
}


void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    //itemIndex = ui->tableView->model()->data(index).toString();
    //qDebug() << index.row();

    itemSelecto.item = ui->tableView->model()->data(index.siblingAtColumn(1)).toString();
    itemSelecto.cant = ui->tableView->model()->data(index.siblingAtColumn(2)).toInt();
    itemSelecto.val = ui->tableView->model()->data(index.siblingAtColumn(3)).toFloat();

    flag_itemSelecto = 1;
    ui->edtTxtCant->setEnabled(true);

    ui->edtTxtItem->setText(itemSelecto.item);
    ui->edtTxtCantStock->setText(QString::number(itemSelecto.cant));
    ui->edtTxtValor->setText(QString::number(itemSelecto.val));

    //qDebug() << itemSelecto.item;
    //qDebug() << itemSelecto.cant;
    //qDebug() << itemSelecto.val;
}


void MainWindow::on_tabFrameGeneral_currentChanged(int index)
{
    QSqlQueryModel * modal=new QSqlQueryModel();

    QSqlQuery query;

    switch (index) {
        case 0: //carrito
            query.exec("SELECT * FROM carrito");

            modal->setQuery(query);
            ui->tblCarrito->setModel(modal);
            ui->tblCarrito->resizeRowsToContents();
        break;
        case 1: //stock

        break;
        case 2: //Editar

        break;
        defaut:
        break;
    } //fin switch index
}

