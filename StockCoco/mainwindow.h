#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//User structs//
typedef struct{
    QString item;
    int cantStock;
    int cant;
    float val;
}T_ITEM_STOCK;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnCarrito_clicked();

    void on_btnEditar_clicked();

    void on_btnStock_clicked();

    void on_btnUpdateTableStock_clicked();

    void on_btnCleanFiltro_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_tabFrameGeneral_currentChanged(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
