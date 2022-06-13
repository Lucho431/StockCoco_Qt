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
//variables compra
int valorCarrito;

//PRIVATE FUNCTIONS//
void refreshCarrito (void){

}


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

    /*
    QSqlQuery query;
    QString consulta;
    consulta = "CREATE TABLE stock ";
    consulta += "(ID INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, ";
    consulta += "Articulo VARCHAR(255) NOT NULL, ";
    consulta += "Litros INTEGER NOT NULL, ";
    consulta += "Color VARCHAR(255) NOT NULL, ";
    consulta += "Cantidad INTEGER NOT NULL, ";
    consulta += "Precio_fabrica FLOAT, ";
    consulta += "Costo FLOAT, ";
    consulta += "Precio_max FLOAT, ";
    consulta += "Ganancia FLOAT, ";
    consulta += "Descuento FLOAT)";
    query.exec(consulta);

    consulta = "CREATE TABLE carrito ";
    consulta += "(ID INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, ";
    consulta += "Articulo VARCHAR(255) NOT NULL, ";
    consulta += "Litros INTEGER NOT NULL, ";
    consulta += "Color VARCHAR(255) NOT NULL, ";
    consulta += "Cantidad INTEGER NOT NULL, ";
    consulta += "Precio_fabrica FLOAT, ";
    consulta += "Costo FLOAT, ";
    consulta += "Precio_max FLOAT, ";
    consulta += "Ganancia FLOAT, ";
    consulta += "Descuento FLOAT)";
    query.exec(consulta);
    */

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
    qDebug() << consulta;

    query.exec(consulta);

    modal->setQuery(query);
    ui->tableView->setModel(modal);
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
    ui->tableView->hideColumn(0);

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
    ui->tableView->resizeColumnsToContents();
    ui->tableView->hideColumn(0);
    flag_itemSelecto = 0;
    ui->edtTxtCant->setDisabled(true);
}


void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    //itemIndex = ui->tableView->model()->data(index).toString();
    //qDebug() << index.row();

    itemSelecto.art =  ui->tableView->model()->data(index.siblingAtColumn(1)).toString();
    itemSelecto.l = ui->tableView->model()->data(index.siblingAtColumn(2)).toString();
    itemSelecto.color = ui->tableView->model()->data(index.siblingAtColumn(3)).toString();
    itemSelecto.cantStock = ui->tableView->model()->data(index.siblingAtColumn(4)).toInt();
    itemSelecto.precio_f = ui->tableView->model()->data(index.siblingAtColumn(5)).toFloat();
    itemSelecto.costo = ui->tableView->model()->data(index.siblingAtColumn(6)).toFloat();
    itemSelecto.precio_max = ui->tableView->model()->data(index.siblingAtColumn(7)).toFloat();
    itemSelecto.gana = ui->tableView->model()->data(index.siblingAtColumn(8)).toInt();
    itemSelecto.desc = ui->tableView->model()->data(index.siblingAtColumn(9)).toInt();

    itemSelecto.val = itemSelecto.precio_f * (float)(100 + itemSelecto.gana) / 100 ;

    /*
     * ui->tableView->model()->data(index.siblingAtColumn(1)).toString() +
                        " " +
                        ui->tableView->model()->data(index.siblingAtColumn(2)).toString() +
                        "ltrs. " +
                        ui->tableView->model()->data(index.siblingAtColumn(3)).toString() ;
*/

    flag_itemSelecto = 1;
    ui->edtTxtCant->setEnabled(true);

    ui->edtTxtItem->setText(itemSelecto.art + " " + itemSelecto.l + "lts. " + itemSelecto.color);
    ui->edtTxtCantStock->setText(QString::number(itemSelecto.cantStock));
    ui->edtTxtValor->setText(QString::number(itemSelecto.val));
    ui->edtTxtDeFabrica->setText(QString::number(itemSelecto.precio_f));
    ui->edtTxtDeVenta->setText(QString::number(itemSelecto.costo));
    ui->edtTxtMaximo->setText(QString::number(itemSelecto.precio_max));
    ui->edtTxtGanancia->setText(QString::number(itemSelecto.gana));
    ui->edtTxtDescuento->setText(QString::number(itemSelecto.desc));

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

            valorCarrito = 0;
            while(query.next()){
                valorCarrito += query.value(4).toInt() * query.value(6).toFloat();
            }
            ui->edtTxtTotal->setText(QString::number(valorCarrito));

            modal->setQuery(query);
            ui->tblCarrito->setModel(modal);
            ui->tblCarrito->resizeRowsToContents();
            ui->tblCarrito->resizeColumnsToContents();
        break;
        case 1: //stock
            query.exec("SELECT * FROM stock");

            modal->setQuery(query);
            ui->tableView->setModel(modal);
            ui->tableView->resizeRowsToContents();
            ui->tableView->resizeColumnsToContents();
            ui->tableView->hideColumn(0);

        break;
        case 2: //Editar

        break;
        defaut:
        break;
    } //fin switch index
}


void MainWindow::on_btnAddCarrito_clicked()
{
    if (itemSelecto.cant == 0){
        return;
    }

    QSqlQueryModel * modal=new QSqlQueryModel();

    QSqlQuery query;

    QString consulta = "SELECT * FROM carrito WHERE Articulo='" + itemSelecto.art + "' AND ";
    consulta += "Litros='" + itemSelecto.l + "' AND Color='" + itemSelecto.color + "'";

    query.exec(consulta);
    query.next();

    if (query.isValid() == false){
        qDebug() << "no hay valor";
        //query.exec("INSERT INTO stock(Articulo,Litros,Color,Cantidad,Precio_fabrica,Costo,Precio_max,Ganancia,Descuento)VALUES('pintura verde',5,850.5)");
        consulta = "INSERT INTO carrito(Articulo,Litros,Color,Cantidad,Precio_fabrica,Costo,Precio_max,Ganancia,Descuento)VALUES('";
        consulta += itemSelecto.art + "', '" + itemSelecto.l + "', '" +
                    itemSelecto.color + "', " + QString::number(itemSelecto.cant) + ", " +
                    QString::number(itemSelecto.precio_f) + ", " + QString::number(itemSelecto.val) + ", " +
                    QString::number(itemSelecto.precio_max) + ", " + QString::number(itemSelecto.gana) + ", " +
                    QString::number(itemSelecto.desc) + ")";
    }else{
        qDebug() << "ya hay valor";
        consulta = "UPDATE carrito SET "; //item='"+ itemSelecto.item + "', ";
        consulta +="Cantidad='" + QString::number(itemSelecto.cant) + "', ";
        consulta +="Precio_fabrica='" + QString::number(itemSelecto.precio_f) + "', ";
        consulta +="Costo='" + QString::number(itemSelecto.val) + "', ";
        consulta +="Precio_max='" + QString::number(itemSelecto.precio_max) + "', ";
        consulta +="Ganancia='" + QString::number(itemSelecto.gana) + "', ";
        consulta +="Descuento='" + QString::number(itemSelecto.desc) + "' WHERE Articulo='" + itemSelecto.art + "' AND ";
        consulta +="Litros='" + itemSelecto.l + "' AND Color='" + itemSelecto.color + "';";
    }

    qDebug() << consulta;

    query.exec(consulta);

    modal->setQuery(query);
    ui->tblCarrito->setModel(modal);
    ui->tblCarrito->resizeRowsToContents();
    ui->tblCarrito->resizeColumnsToContents();

}


void MainWindow::on_edtTxtCant_textChanged(const QString &arg1)
{
    //int auxCant = atoi(arg1);
    int auxCant = arg1.toInt();
    if (auxCant > 0 && auxCant <= itemSelecto.cantStock){
        ui->edtTxtCant->setText(QString::number(auxCant));
        itemSelecto.cant=auxCant;
    }else{
        ui->edtTxtCant->setText("0");
        itemSelecto.cant=0;
    }

    //ui->edtTxtCant->setText()
}


void MainWindow::on_btnClearCarrito_clicked()
{
    QSqlQueryModel * modal=new QSqlQueryModel();

    QSqlQuery query;

    QString consulta = "DELETE FROM carrito";

    query.exec(consulta);
    valorCarrito = 0;
    ui->edtTxtTotal->setText(QString::number(valorCarrito));

    modal->setQuery(query);
    ui->tblCarrito->setModel(modal);
    ui->tblCarrito->resizeRowsToContents();
    ui->tblCarrito->resizeColumnsToContents();
}

