#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCarrito_clicked()
{
    ui->tabFrameGeneral->setCurrentIndex(0);
    //ui->tabCarrito->
}


void MainWindow::on_btnEditar_clicked()
{
    ui->tabFrameGeneral->setCurrentIndex(1);
}


void MainWindow::on_btnStock_clicked()
{
    ui->tabFrameGeneral->setCurrentIndex(2);
}



