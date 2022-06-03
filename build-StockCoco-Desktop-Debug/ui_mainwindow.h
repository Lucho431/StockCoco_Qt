/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnCarrito;
    QPushButton *btnEditar;
    QPushButton *btnStock;
    QTabWidget *tabFrameGeneral;
    QWidget *tabCarrito;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QTableView *tblCarrito;
    QGroupBox *groupBox_2;
    QPushButton *btnClearCarrito;
    QPushButton *pushButton_2;
    QWidget *tabStock;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QPushButton *btnUpdateTableStock;
    QLabel *lblFiltro;
    QComboBox *cmbFiltro;
    QLineEdit *edtTxtFiltro;
    QPushButton *btnCleanFiltro;
    QTableView *tableView;
    QFrame *frame;
    QPushButton *btnAddCarrito;
    QLabel *lblItem;
    QLabel *lblValor;
    QLabel *lblCantStock;
    QLineEdit *edtTxtItem;
    QLineEdit *edtTxtValor;
    QLineEdit *edtTxtCantStock;
    QLineEdit *edtTxtCant;
    QLabel *lblCant;
    QLabel *lblAviso;
    QWidget *tabEditar;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1014, 638);
        MainWindow->setMinimumSize(QSize(1014, 638));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMaximumSize(QSize(1939, 1583));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalWidget = new QWidget(centralwidget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalWidget->setMinimumSize(QSize(160, 0));
        verticalWidget->setMaximumSize(QSize(200, 16777215));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        btnCarrito = new QPushButton(verticalWidget);
        btnCarrito->setObjectName(QString::fromUtf8("btnCarrito"));
        btnCarrito->setMinimumSize(QSize(0, 188));

        verticalLayout->addWidget(btnCarrito);

        btnEditar = new QPushButton(verticalWidget);
        btnEditar->setObjectName(QString::fromUtf8("btnEditar"));
        btnEditar->setMinimumSize(QSize(0, 188));

        verticalLayout->addWidget(btnEditar);

        btnStock = new QPushButton(verticalWidget);
        btnStock->setObjectName(QString::fromUtf8("btnStock"));
        btnStock->setMinimumSize(QSize(0, 188));

        verticalLayout->addWidget(btnStock);


        horizontalLayout->addWidget(verticalWidget);

        tabFrameGeneral = new QTabWidget(centralwidget);
        tabFrameGeneral->setObjectName(QString::fromUtf8("tabFrameGeneral"));
        tabFrameGeneral->setTabPosition(QTabWidget::North);
        tabFrameGeneral->setTabShape(QTabWidget::Rounded);
        tabCarrito = new QWidget();
        tabCarrito->setObjectName(QString::fromUtf8("tabCarrito"));
        verticalLayout_3 = new QVBoxLayout(tabCarrito);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEdit = new QLineEdit(tabCarrito);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        tblCarrito = new QTableView(tabCarrito);
        tblCarrito->setObjectName(QString::fromUtf8("tblCarrito"));
        tblCarrito->setEnabled(true);
        tblCarrito->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(tblCarrito);

        groupBox_2 = new QGroupBox(tabCarrito);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 76));
        btnClearCarrito = new QPushButton(groupBox_2);
        btnClearCarrito->setObjectName(QString::fromUtf8("btnClearCarrito"));
        btnClearCarrito->setGeometry(QRect(640, 40, 111, 25));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 40, 131, 25));

        verticalLayout_3->addWidget(groupBox_2);

        tabFrameGeneral->addTab(tabCarrito, QString());
        tabStock = new QWidget();
        tabStock->setObjectName(QString::fromUtf8("tabStock"));
        verticalLayout_2 = new QVBoxLayout(tabStock);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(tabStock);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 64));
        btnUpdateTableStock = new QPushButton(groupBox);
        btnUpdateTableStock->setObjectName(QString::fromUtf8("btnUpdateTableStock"));
        btnUpdateTableStock->setGeometry(QRect(590, 30, 101, 25));
        lblFiltro = new QLabel(groupBox);
        lblFiltro->setObjectName(QString::fromUtf8("lblFiltro"));
        lblFiltro->setGeometry(QRect(10, 34, 81, 17));
        cmbFiltro = new QComboBox(groupBox);
        cmbFiltro->addItem(QString());
        cmbFiltro->addItem(QString());
        cmbFiltro->addItem(QString());
        cmbFiltro->setObjectName(QString::fromUtf8("cmbFiltro"));
        cmbFiltro->setGeometry(QRect(100, 30, 86, 25));
        edtTxtFiltro = new QLineEdit(groupBox);
        edtTxtFiltro->setObjectName(QString::fromUtf8("edtTxtFiltro"));
        edtTxtFiltro->setGeometry(QRect(190, 30, 391, 25));
        btnCleanFiltro = new QPushButton(groupBox);
        btnCleanFiltro->setObjectName(QString::fromUtf8("btnCleanFiltro"));
        btnCleanFiltro->setGeometry(QRect(700, 30, 101, 25));

        verticalLayout_2->addWidget(groupBox);

        tableView = new QTableView(tabStock);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setDefaultSectionSize(200);
        tableView->horizontalHeader()->setHighlightSections(false);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout_2->addWidget(tableView);

        frame = new QFrame(tabStock);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 83));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        btnAddCarrito = new QPushButton(frame);
        btnAddCarrito->setObjectName(QString::fromUtf8("btnAddCarrito"));
        btnAddCarrito->setGeometry(QRect(600, 10, 131, 25));
        lblItem = new QLabel(frame);
        lblItem->setObjectName(QString::fromUtf8("lblItem"));
        lblItem->setGeometry(QRect(139, 10, 41, 17));
        lblValor = new QLabel(frame);
        lblValor->setObjectName(QString::fromUtf8("lblValor"));
        lblValor->setGeometry(QRect(319, 36, 71, 17));
        lblCantStock = new QLabel(frame);
        lblCantStock->setObjectName(QString::fromUtf8("lblCantStock"));
        lblCantStock->setGeometry(QRect(50, 36, 131, 17));
        edtTxtItem = new QLineEdit(frame);
        edtTxtItem->setObjectName(QString::fromUtf8("edtTxtItem"));
        edtTxtItem->setGeometry(QRect(190, 3, 331, 25));
        edtTxtItem->setFrame(true);
        edtTxtItem->setReadOnly(true);
        edtTxtValor = new QLineEdit(frame);
        edtTxtValor->setObjectName(QString::fromUtf8("edtTxtValor"));
        edtTxtValor->setGeometry(QRect(392, 30, 129, 25));
        edtTxtValor->setReadOnly(true);
        edtTxtCantStock = new QLineEdit(frame);
        edtTxtCantStock->setObjectName(QString::fromUtf8("edtTxtCantStock"));
        edtTxtCantStock->setGeometry(QRect(190, 30, 121, 25));
        edtTxtCantStock->setReadOnly(true);
        edtTxtCant = new QLineEdit(frame);
        edtTxtCant->setObjectName(QString::fromUtf8("edtTxtCant"));
        edtTxtCant->setEnabled(false);
        edtTxtCant->setGeometry(QRect(190, 57, 331, 25));
        lblCant = new QLabel(frame);
        lblCant->setObjectName(QString::fromUtf8("lblCant"));
        lblCant->setGeometry(QRect(35, 60, 151, 20));
        lblAviso = new QLabel(frame);
        lblAviso->setObjectName(QString::fromUtf8("lblAviso"));
        lblAviso->setGeometry(QRect(550, 60, 251, 17));

        verticalLayout_2->addWidget(frame);

        tabFrameGeneral->addTab(tabStock, QString());
        tabEditar = new QWidget();
        tabEditar->setObjectName(QString::fromUtf8("tabEditar"));
        checkBox = new QCheckBox(tabEditar);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(280, 200, 92, 23));
        tabFrameGeneral->addTab(tabEditar, QString());

        horizontalLayout->addWidget(tabFrameGeneral);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1014, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabFrameGeneral->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Fusion Tex  -  Plataforma De Stock", nullptr));
        btnCarrito->setText(QApplication::translate("MainWindow", "Carrito", nullptr));
        btnEditar->setText(QApplication::translate("MainWindow", "Editar / Agregar", nullptr));
        btnStock->setText(QApplication::translate("MainWindow", "Stock", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "ss", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        btnClearCarrito->setText(QApplication::translate("MainWindow", "Vaciar carrito", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Realizar compra", nullptr));
        tabFrameGeneral->setTabText(tabFrameGeneral->indexOf(tabCarrito), QApplication::translate("MainWindow", "Carrito", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Filtro de busqueda", nullptr));
        btnUpdateTableStock->setText(QApplication::translate("MainWindow", "Buscar", nullptr));
        lblFiltro->setText(QApplication::translate("MainWindow", "Filtrar por:", nullptr));
        cmbFiltro->setItemText(0, QApplication::translate("MainWindow", "item", nullptr));
        cmbFiltro->setItemText(1, QApplication::translate("MainWindow", "cantidad", nullptr));
        cmbFiltro->setItemText(2, QApplication::translate("MainWindow", "valor", nullptr));

        btnCleanFiltro->setText(QApplication::translate("MainWindow", "Limpiar filtro", nullptr));
        btnAddCarrito->setText(QApplication::translate("MainWindow", "agregar al carrito", nullptr));
        lblItem->setText(QApplication::translate("MainWindow", "\303\257tem :", nullptr));
        lblValor->setText(QApplication::translate("MainWindow", "Valor [$] :", nullptr));
        lblCantStock->setText(QApplication::translate("MainWindow", "Cantidad en stock :", nullptr));
        edtTxtItem->setText(QString());
        lblCant->setText(QApplication::translate("MainWindow", "Cantidad de compra :", nullptr));
        lblAviso->setText(QString());
        tabFrameGeneral->setTabText(tabFrameGeneral->indexOf(tabStock), QApplication::translate("MainWindow", "Stock", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", nullptr));
        tabFrameGeneral->setTabText(tabFrameGeneral->indexOf(tabEditar), QApplication::translate("MainWindow", "Editar / Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
