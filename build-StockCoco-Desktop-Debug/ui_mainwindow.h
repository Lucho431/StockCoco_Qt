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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QPushButton *pushButton;
    QTableView *tableCarrito;
    QWidget *tabStock;
    QRadioButton *radioButton;
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
        pushButton = new QPushButton(tabCarrito);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 380, 89, 25));
        tableCarrito = new QTableView(tabCarrito);
        tableCarrito->setObjectName(QString::fromUtf8("tableCarrito"));
        tableCarrito->setGeometry(QRect(240, 100, 256, 192));
        tableCarrito->setProperty("showDropIndicator", QVariant(false));
        tabFrameGeneral->addTab(tabCarrito, QString());
        tabStock = new QWidget();
        tabStock->setObjectName(QString::fromUtf8("tabStock"));
        radioButton = new QRadioButton(tabStock);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(350, 210, 112, 23));
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

        tabFrameGeneral->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Stock Pintureria de coco", nullptr));
        btnCarrito->setText(QApplication::translate("MainWindow", "Carrito", nullptr));
        btnEditar->setText(QApplication::translate("MainWindow", "Editar / Agregar", nullptr));
        btnStock->setText(QApplication::translate("MainWindow", "Stock", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        tabFrameGeneral->setTabText(tabFrameGeneral->indexOf(tabCarrito), QApplication::translate("MainWindow", "Carrito", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
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
