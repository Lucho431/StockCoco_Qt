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
#include <QtWidgets/QRadioButton>
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
    QGroupBox *grpResumenCarrito;
    QPushButton *btnClearCarrito;
    QPushButton *btnComprar;
    QLabel *label;
    QLineEdit *edtTxtTotal;
    QCheckBox *chkDescuento;
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
    QLabel *lblTituloPrecios;
    QLabel *lblDeFabrica;
    QLabel *lblDeVenta;
    QLabel *lblMaximo;
    QLineEdit *edtTxtDeFabrica;
    QLineEdit *edtTxtMaximo;
    QLineEdit *edtTxtDeVenta;
    QLabel *lblGanancia;
    QLabel *lblDesc;
    QLineEdit *edtTxtGanancia;
    QLineEdit *edtTxtDescuento;
    QPushButton *btnEditarItem;
    QWidget *tabEditar;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *grpBuscaEdit;
    QPushButton *btnUpdateTableEditar;
    QLabel *lblFiltroEditar;
    QComboBox *cmbFiltroEditar;
    QLineEdit *edtTxtFiltroEditar;
    QPushButton *btnCleanFiltroEditar;
    QFrame *frmEditarAtrib;
    QLineEdit *edtTxtDescuentoEditar;
    QPushButton *btnEliminar;
    QLineEdit *edtTxtArt;
    QLabel *lblLitros;
    QLabel *lblTituloPreciosEditar;
    QLabel *lblGananciaEditar;
    QLineEdit *edtTxtLitros;
    QLabel *lblColor;
    QLabel *lblDeVentaEditar;
    QLabel *lblValorEditar;
    QLabel *lblDescEditar;
    QLabel *lblMaximoEditar;
    QLineEdit *edtTxtDeVentaEditar;
    QLineEdit *edtTxtMaximoEditar;
    QLineEdit *edtTxtColor;
    QPushButton *btnGuardar;
    QLineEdit *edtTxtDeFabricaEditar;
    QLabel *lblArt;
    QLineEdit *edtTxtValorEditar;
    QLabel *lblAvisoEditar;
    QLabel *lblDeFabricaEditar;
    QLineEdit *edtTxtGananciaEditar;
    QRadioButton *radEditar;
    QRadioButton *radNuevo;
    QLabel *lblCantStockEditar;
    QLineEdit *edtTxtCantStockEditar;
    QTableView *tblEditar;
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
        tblCarrito->setProperty("showDropIndicator", QVariant(false));
        tblCarrito->setSelectionMode(QAbstractItemView::SingleSelection);
        tblCarrito->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblCarrito->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(tblCarrito);

        grpResumenCarrito = new QGroupBox(tabCarrito);
        grpResumenCarrito->setObjectName(QString::fromUtf8("grpResumenCarrito"));
        grpResumenCarrito->setMinimumSize(QSize(0, 90));
        btnClearCarrito = new QPushButton(grpResumenCarrito);
        btnClearCarrito->setObjectName(QString::fromUtf8("btnClearCarrito"));
        btnClearCarrito->setGeometry(QRect(640, 56, 111, 25));
        btnComprar = new QPushButton(grpResumenCarrito);
        btnComprar->setObjectName(QString::fromUtf8("btnComprar"));
        btnComprar->setGeometry(QRect(399, 56, 131, 25));
        label = new QLabel(grpResumenCarrito);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 61, 17));
        edtTxtTotal = new QLineEdit(grpResumenCarrito);
        edtTxtTotal->setObjectName(QString::fromUtf8("edtTxtTotal"));
        edtTxtTotal->setGeometry(QRect(100, 56, 191, 25));
        edtTxtTotal->setReadOnly(true);
        chkDescuento = new QCheckBox(grpResumenCarrito);
        chkDescuento->setObjectName(QString::fromUtf8("chkDescuento"));
        chkDescuento->setGeometry(QRect(10, 26, 141, 23));

        verticalLayout_3->addWidget(grpResumenCarrito);

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
        cmbFiltro->addItem(QString());
        cmbFiltro->addItem(QString());
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
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setDefaultSectionSize(57);
        tableView->horizontalHeader()->setHighlightSections(false);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout_2->addWidget(tableView);

        frame = new QFrame(tabStock);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 205));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        btnAddCarrito = new QPushButton(frame);
        btnAddCarrito->setObjectName(QString::fromUtf8("btnAddCarrito"));
        btnAddCarrito->setGeometry(QRect(343, 160, 131, 25));
        lblItem = new QLabel(frame);
        lblItem->setObjectName(QString::fromUtf8("lblItem"));
        lblItem->setGeometry(QRect(50, 24, 41, 17));
        lblValor = new QLabel(frame);
        lblValor->setObjectName(QString::fromUtf8("lblValor"));
        lblValor->setGeometry(QRect(510, 123, 71, 17));
        lblCantStock = new QLabel(frame);
        lblCantStock->setObjectName(QString::fromUtf8("lblCantStock"));
        lblCantStock->setGeometry(QRect(447, 24, 131, 17));
        edtTxtItem = new QLineEdit(frame);
        edtTxtItem->setObjectName(QString::fromUtf8("edtTxtItem"));
        edtTxtItem->setGeometry(QRect(100, 20, 331, 25));
        edtTxtItem->setFrame(true);
        edtTxtItem->setReadOnly(true);
        edtTxtValor = new QLineEdit(frame);
        edtTxtValor->setObjectName(QString::fromUtf8("edtTxtValor"));
        edtTxtValor->setGeometry(QRect(583, 120, 91, 25));
        edtTxtValor->setReadOnly(true);
        edtTxtCantStock = new QLineEdit(frame);
        edtTxtCantStock->setObjectName(QString::fromUtf8("edtTxtCantStock"));
        edtTxtCantStock->setGeometry(QRect(583, 20, 91, 25));
        edtTxtCantStock->setReadOnly(true);
        edtTxtCant = new QLineEdit(frame);
        edtTxtCant->setObjectName(QString::fromUtf8("edtTxtCant"));
        edtTxtCant->setEnabled(false);
        edtTxtCant->setGeometry(QRect(180, 159, 131, 25));
        lblCant = new QLabel(frame);
        lblCant->setObjectName(QString::fromUtf8("lblCant"));
        lblCant->setGeometry(QRect(24, 161, 151, 20));
        lblAviso = new QLabel(frame);
        lblAviso->setObjectName(QString::fromUtf8("lblAviso"));
        lblAviso->setGeometry(QRect(540, 60, 251, 17));
        lblTituloPrecios = new QLabel(frame);
        lblTituloPrecios->setObjectName(QString::fromUtf8("lblTituloPrecios"));
        lblTituloPrecios->setGeometry(QRect(20, 60, 67, 17));
        lblDeFabrica = new QLabel(frame);
        lblDeFabrica->setObjectName(QString::fromUtf8("lblDeFabrica"));
        lblDeFabrica->setGeometry(QRect(70, 95, 101, 17));
        lblDeVenta = new QLabel(frame);
        lblDeVenta->setObjectName(QString::fromUtf8("lblDeVenta"));
        lblDeVenta->setGeometry(QRect(292, 95, 91, 17));
        lblMaximo = new QLabel(frame);
        lblMaximo->setObjectName(QString::fromUtf8("lblMaximo"));
        lblMaximo->setGeometry(QRect(492, 95, 91, 17));
        edtTxtDeFabrica = new QLineEdit(frame);
        edtTxtDeFabrica->setObjectName(QString::fromUtf8("edtTxtDeFabrica"));
        edtTxtDeFabrica->setGeometry(QRect(180, 90, 91, 25));
        edtTxtDeFabrica->setReadOnly(true);
        edtTxtMaximo = new QLineEdit(frame);
        edtTxtMaximo->setObjectName(QString::fromUtf8("edtTxtMaximo"));
        edtTxtMaximo->setGeometry(QRect(583, 90, 91, 25));
        edtTxtMaximo->setReadOnly(true);
        edtTxtDeVenta = new QLineEdit(frame);
        edtTxtDeVenta->setObjectName(QString::fromUtf8("edtTxtDeVenta"));
        edtTxtDeVenta->setGeometry(QRect(390, 90, 91, 25));
        edtTxtDeVenta->setReadOnly(true);
        lblGanancia = new QLabel(frame);
        lblGanancia->setObjectName(QString::fromUtf8("lblGanancia"));
        lblGanancia->setGeometry(QRect(74, 123, 101, 17));
        lblDesc = new QLabel(frame);
        lblDesc->setObjectName(QString::fromUtf8("lblDesc"));
        lblDesc->setGeometry(QRect(276, 123, 111, 17));
        edtTxtGanancia = new QLineEdit(frame);
        edtTxtGanancia->setObjectName(QString::fromUtf8("edtTxtGanancia"));
        edtTxtGanancia->setGeometry(QRect(180, 120, 91, 25));
        edtTxtGanancia->setReadOnly(true);
        edtTxtDescuento = new QLineEdit(frame);
        edtTxtDescuento->setObjectName(QString::fromUtf8("edtTxtDescuento"));
        edtTxtDescuento->setGeometry(QRect(390, 120, 91, 25));
        edtTxtDescuento->setReadOnly(true);
        btnEditarItem = new QPushButton(frame);
        btnEditarItem->setObjectName(QString::fromUtf8("btnEditarItem"));
        btnEditarItem->setGeometry(QRect(566, 160, 111, 25));

        verticalLayout_2->addWidget(frame);

        tabFrameGeneral->addTab(tabStock, QString());
        tabEditar = new QWidget();
        tabEditar->setObjectName(QString::fromUtf8("tabEditar"));
        verticalLayout_4 = new QVBoxLayout(tabEditar);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        grpBuscaEdit = new QGroupBox(tabEditar);
        grpBuscaEdit->setObjectName(QString::fromUtf8("grpBuscaEdit"));
        grpBuscaEdit->setMinimumSize(QSize(0, 64));
        btnUpdateTableEditar = new QPushButton(grpBuscaEdit);
        btnUpdateTableEditar->setObjectName(QString::fromUtf8("btnUpdateTableEditar"));
        btnUpdateTableEditar->setGeometry(QRect(590, 30, 101, 25));
        lblFiltroEditar = new QLabel(grpBuscaEdit);
        lblFiltroEditar->setObjectName(QString::fromUtf8("lblFiltroEditar"));
        lblFiltroEditar->setGeometry(QRect(10, 34, 81, 17));
        cmbFiltroEditar = new QComboBox(grpBuscaEdit);
        cmbFiltroEditar->addItem(QString());
        cmbFiltroEditar->addItem(QString());
        cmbFiltroEditar->addItem(QString());
        cmbFiltroEditar->addItem(QString());
        cmbFiltroEditar->addItem(QString());
        cmbFiltroEditar->addItem(QString());
        cmbFiltroEditar->addItem(QString());
        cmbFiltroEditar->addItem(QString());
        cmbFiltroEditar->setObjectName(QString::fromUtf8("cmbFiltroEditar"));
        cmbFiltroEditar->setGeometry(QRect(100, 30, 86, 25));
        edtTxtFiltroEditar = new QLineEdit(grpBuscaEdit);
        edtTxtFiltroEditar->setObjectName(QString::fromUtf8("edtTxtFiltroEditar"));
        edtTxtFiltroEditar->setGeometry(QRect(190, 30, 391, 25));
        btnCleanFiltroEditar = new QPushButton(grpBuscaEdit);
        btnCleanFiltroEditar->setObjectName(QString::fromUtf8("btnCleanFiltroEditar"));
        btnCleanFiltroEditar->setGeometry(QRect(700, 30, 101, 25));

        verticalLayout_4->addWidget(grpBuscaEdit);

        frmEditarAtrib = new QFrame(tabEditar);
        frmEditarAtrib->setObjectName(QString::fromUtf8("frmEditarAtrib"));
        frmEditarAtrib->setMinimumSize(QSize(0, 229));
        frmEditarAtrib->setFrameShape(QFrame::StyledPanel);
        frmEditarAtrib->setFrameShadow(QFrame::Raised);
        edtTxtDescuentoEditar = new QLineEdit(frmEditarAtrib);
        edtTxtDescuentoEditar->setObjectName(QString::fromUtf8("edtTxtDescuentoEditar"));
        edtTxtDescuentoEditar->setGeometry(QRect(390, 147, 91, 25));
        edtTxtDescuentoEditar->setReadOnly(false);
        btnEliminar = new QPushButton(frmEditarAtrib);
        btnEliminar->setObjectName(QString::fromUtf8("btnEliminar"));
        btnEliminar->setGeometry(QRect(511, 187, 111, 25));
        edtTxtArt = new QLineEdit(frmEditarAtrib);
        edtTxtArt->setObjectName(QString::fromUtf8("edtTxtArt"));
        edtTxtArt->setGeometry(QRect(100, 47, 141, 25));
        edtTxtArt->setFrame(true);
        edtTxtArt->setReadOnly(true);
        lblLitros = new QLabel(frmEditarAtrib);
        lblLitros->setObjectName(QString::fromUtf8("lblLitros"));
        lblLitros->setGeometry(QRect(250, 47, 51, 20));
        lblTituloPreciosEditar = new QLabel(frmEditarAtrib);
        lblTituloPreciosEditar->setObjectName(QString::fromUtf8("lblTituloPreciosEditar"));
        lblTituloPreciosEditar->setGeometry(QRect(20, 87, 67, 17));
        lblGananciaEditar = new QLabel(frmEditarAtrib);
        lblGananciaEditar->setObjectName(QString::fromUtf8("lblGananciaEditar"));
        lblGananciaEditar->setGeometry(QRect(74, 150, 101, 17));
        edtTxtLitros = new QLineEdit(frmEditarAtrib);
        edtTxtLitros->setObjectName(QString::fromUtf8("edtTxtLitros"));
        edtTxtLitros->setEnabled(true);
        edtTxtLitros->setGeometry(QRect(300, 47, 71, 25));
        edtTxtLitros->setReadOnly(true);
        lblColor = new QLabel(frmEditarAtrib);
        lblColor->setObjectName(QString::fromUtf8("lblColor"));
        lblColor->setGeometry(QRect(385, 51, 51, 17));
        lblDeVentaEditar = new QLabel(frmEditarAtrib);
        lblDeVentaEditar->setObjectName(QString::fromUtf8("lblDeVentaEditar"));
        lblDeVentaEditar->setGeometry(QRect(292, 122, 91, 17));
        lblValorEditar = new QLabel(frmEditarAtrib);
        lblValorEditar->setObjectName(QString::fromUtf8("lblValorEditar"));
        lblValorEditar->setGeometry(QRect(510, 150, 71, 17));
        lblDescEditar = new QLabel(frmEditarAtrib);
        lblDescEditar->setObjectName(QString::fromUtf8("lblDescEditar"));
        lblDescEditar->setGeometry(QRect(276, 150, 111, 17));
        lblMaximoEditar = new QLabel(frmEditarAtrib);
        lblMaximoEditar->setObjectName(QString::fromUtf8("lblMaximoEditar"));
        lblMaximoEditar->setGeometry(QRect(492, 122, 91, 17));
        edtTxtDeVentaEditar = new QLineEdit(frmEditarAtrib);
        edtTxtDeVentaEditar->setObjectName(QString::fromUtf8("edtTxtDeVentaEditar"));
        edtTxtDeVentaEditar->setGeometry(QRect(390, 117, 91, 25));
        edtTxtDeVentaEditar->setReadOnly(false);
        edtTxtMaximoEditar = new QLineEdit(frmEditarAtrib);
        edtTxtMaximoEditar->setObjectName(QString::fromUtf8("edtTxtMaximoEditar"));
        edtTxtMaximoEditar->setGeometry(QRect(583, 117, 91, 25));
        edtTxtMaximoEditar->setReadOnly(false);
        edtTxtColor = new QLineEdit(frmEditarAtrib);
        edtTxtColor->setObjectName(QString::fromUtf8("edtTxtColor"));
        edtTxtColor->setGeometry(QRect(436, 47, 71, 25));
        edtTxtColor->setReadOnly(true);
        btnGuardar = new QPushButton(frmEditarAtrib);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(137, 187, 131, 25));
        edtTxtDeFabricaEditar = new QLineEdit(frmEditarAtrib);
        edtTxtDeFabricaEditar->setObjectName(QString::fromUtf8("edtTxtDeFabricaEditar"));
        edtTxtDeFabricaEditar->setGeometry(QRect(180, 117, 91, 25));
        edtTxtDeFabricaEditar->setReadOnly(false);
        lblArt = new QLabel(frmEditarAtrib);
        lblArt->setObjectName(QString::fromUtf8("lblArt"));
        lblArt->setGeometry(QRect(30, 51, 61, 20));
        edtTxtValorEditar = new QLineEdit(frmEditarAtrib);
        edtTxtValorEditar->setObjectName(QString::fromUtf8("edtTxtValorEditar"));
        edtTxtValorEditar->setGeometry(QRect(583, 147, 91, 25));
        edtTxtValorEditar->setReadOnly(false);
        lblAvisoEditar = new QLabel(frmEditarAtrib);
        lblAvisoEditar->setObjectName(QString::fromUtf8("lblAvisoEditar"));
        lblAvisoEditar->setGeometry(QRect(540, 87, 251, 17));
        lblDeFabricaEditar = new QLabel(frmEditarAtrib);
        lblDeFabricaEditar->setObjectName(QString::fromUtf8("lblDeFabricaEditar"));
        lblDeFabricaEditar->setGeometry(QRect(70, 122, 101, 17));
        edtTxtGananciaEditar = new QLineEdit(frmEditarAtrib);
        edtTxtGananciaEditar->setObjectName(QString::fromUtf8("edtTxtGananciaEditar"));
        edtTxtGananciaEditar->setGeometry(QRect(180, 147, 91, 25));
        edtTxtGananciaEditar->setReadOnly(false);
        radEditar = new QRadioButton(frmEditarAtrib);
        radEditar->setObjectName(QString::fromUtf8("radEditar"));
        radEditar->setGeometry(QRect(30, 10, 131, 23));
        radEditar->setChecked(true);
        radNuevo = new QRadioButton(frmEditarAtrib);
        radNuevo->setObjectName(QString::fromUtf8("radNuevo"));
        radNuevo->setGeometry(QRect(190, 10, 131, 23));
        lblCantStockEditar = new QLabel(frmEditarAtrib);
        lblCantStockEditar->setObjectName(QString::fromUtf8("lblCantStockEditar"));
        lblCantStockEditar->setGeometry(QRect(515, 52, 51, 17));
        edtTxtCantStockEditar = new QLineEdit(frmEditarAtrib);
        edtTxtCantStockEditar->setObjectName(QString::fromUtf8("edtTxtCantStockEditar"));
        edtTxtCantStockEditar->setGeometry(QRect(570, 48, 91, 25));
        edtTxtCantStockEditar->setReadOnly(false);

        verticalLayout_4->addWidget(frmEditarAtrib);

        tblEditar = new QTableView(tabEditar);
        tblEditar->setObjectName(QString::fromUtf8("tblEditar"));
        tblEditar->setSelectionMode(QAbstractItemView::SingleSelection);
        tblEditar->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_4->addWidget(tblEditar);

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
        lineEdit->setText(QString());
        grpResumenCarrito->setTitle(QApplication::translate("MainWindow", "Resumen del Carrito", nullptr));
        btnClearCarrito->setText(QApplication::translate("MainWindow", "Vaciar carrito", nullptr));
        btnComprar->setText(QApplication::translate("MainWindow", "Realizar compra", nullptr));
        label->setText(QApplication::translate("MainWindow", "TOTAL :", nullptr));
        chkDescuento->setText(QApplication::translate("MainWindow", "Aplica Descuento", nullptr));
        tabFrameGeneral->setTabText(tabFrameGeneral->indexOf(tabCarrito), QApplication::translate("MainWindow", "Carrito", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Filtro de busqueda", nullptr));
        btnUpdateTableStock->setText(QApplication::translate("MainWindow", "Buscar", nullptr));
        lblFiltro->setText(QApplication::translate("MainWindow", "Filtrar por:", nullptr));
        cmbFiltro->setItemText(0, QApplication::translate("MainWindow", "Articulo", nullptr));
        cmbFiltro->setItemText(1, QApplication::translate("MainWindow", "Litros", nullptr));
        cmbFiltro->setItemText(2, QApplication::translate("MainWindow", "Color", nullptr));
        cmbFiltro->setItemText(3, QApplication::translate("MainWindow", "Precio_fabrica", nullptr));
        cmbFiltro->setItemText(4, QApplication::translate("MainWindow", "Costo", nullptr));
        cmbFiltro->setItemText(5, QApplication::translate("MainWindow", "Precio_max", nullptr));
        cmbFiltro->setItemText(6, QApplication::translate("MainWindow", "Ganancia", nullptr));
        cmbFiltro->setItemText(7, QApplication::translate("MainWindow", "Descuento", nullptr));

        btnCleanFiltro->setText(QApplication::translate("MainWindow", "Limpiar filtro", nullptr));
        btnAddCarrito->setText(QApplication::translate("MainWindow", "agregar al carrito", nullptr));
        lblItem->setText(QApplication::translate("MainWindow", "\303\257tem :", nullptr));
        lblValor->setText(QApplication::translate("MainWindow", "Valor [$] :", nullptr));
        lblCantStock->setText(QApplication::translate("MainWindow", "Cantidad en stock :", nullptr));
        edtTxtItem->setText(QString());
        lblCant->setText(QApplication::translate("MainWindow", "Cantidad de compra :", nullptr));
        lblAviso->setText(QString());
        lblTituloPrecios->setText(QApplication::translate("MainWindow", "PRECIOS:", nullptr));
        lblDeFabrica->setText(QApplication::translate("MainWindow", "De f\303\241brica [$] : ", nullptr));
        lblDeVenta->setText(QApplication::translate("MainWindow", "De venta [$] :", nullptr));
        lblMaximo->setText(QApplication::translate("MainWindow", "M\303\241ximo [$] :", nullptr));
        lblGanancia->setText(QApplication::translate("MainWindow", "Ganancia [%] : ", nullptr));
        lblDesc->setText(QApplication::translate("MainWindow", "Descuento [%] : ", nullptr));
        btnEditarItem->setText(QApplication::translate("MainWindow", "editar \303\255tem", nullptr));
        tabFrameGeneral->setTabText(tabFrameGeneral->indexOf(tabStock), QApplication::translate("MainWindow", "Stock", nullptr));
        grpBuscaEdit->setTitle(QApplication::translate("MainWindow", "Filtro de busqueda", nullptr));
        btnUpdateTableEditar->setText(QApplication::translate("MainWindow", "Buscar", nullptr));
        lblFiltroEditar->setText(QApplication::translate("MainWindow", "Filtrar por:", nullptr));
        cmbFiltroEditar->setItemText(0, QApplication::translate("MainWindow", "Articulo", nullptr));
        cmbFiltroEditar->setItemText(1, QApplication::translate("MainWindow", "Litros", nullptr));
        cmbFiltroEditar->setItemText(2, QApplication::translate("MainWindow", "Color", nullptr));
        cmbFiltroEditar->setItemText(3, QApplication::translate("MainWindow", "Precio_fabrica", nullptr));
        cmbFiltroEditar->setItemText(4, QApplication::translate("MainWindow", "Costo", nullptr));
        cmbFiltroEditar->setItemText(5, QApplication::translate("MainWindow", "Precio_max", nullptr));
        cmbFiltroEditar->setItemText(6, QApplication::translate("MainWindow", "Ganancia", nullptr));
        cmbFiltroEditar->setItemText(7, QApplication::translate("MainWindow", "Descuento", nullptr));

        btnCleanFiltroEditar->setText(QApplication::translate("MainWindow", "Limpiar filtro", nullptr));
        btnEliminar->setText(QApplication::translate("MainWindow", "Eliminar", nullptr));
        edtTxtArt->setText(QString());
        lblLitros->setText(QApplication::translate("MainWindow", "Litros :", nullptr));
        lblTituloPreciosEditar->setText(QApplication::translate("MainWindow", "PRECIOS:", nullptr));
        lblGananciaEditar->setText(QApplication::translate("MainWindow", "Ganancia [%] : ", nullptr));
        lblColor->setText(QApplication::translate("MainWindow", "Color :", nullptr));
        lblDeVentaEditar->setText(QApplication::translate("MainWindow", "De venta [$] :", nullptr));
        lblValorEditar->setText(QApplication::translate("MainWindow", "Valor [$] :", nullptr));
        lblDescEditar->setText(QApplication::translate("MainWindow", "Descuento [%] : ", nullptr));
        lblMaximoEditar->setText(QApplication::translate("MainWindow", "M\303\241ximo [$] :", nullptr));
        btnGuardar->setText(QApplication::translate("MainWindow", "Guardar", nullptr));
        lblArt->setText(QApplication::translate("MainWindow", "Art\303\255culo :", nullptr));
        lblAvisoEditar->setText(QString());
        lblDeFabricaEditar->setText(QApplication::translate("MainWindow", "De f\303\241brica [$] : ", nullptr));
        radEditar->setText(QApplication::translate("MainWindow", "Editar Art\303\255culo", nullptr));
        radNuevo->setText(QApplication::translate("MainWindow", "Nuevo Art\303\255culo", nullptr));
        lblCantStockEditar->setText(QApplication::translate("MainWindow", "Stock :", nullptr));
        tabFrameGeneral->setTabText(tabFrameGeneral->indexOf(tabEditar), QApplication::translate("MainWindow", "Editar / Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
