#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
