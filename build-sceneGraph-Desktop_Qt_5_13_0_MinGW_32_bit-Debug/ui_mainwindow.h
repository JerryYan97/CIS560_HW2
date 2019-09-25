/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "mygl.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    MyGL *mygl;
    QTreeWidget *treeWidget;
    QPushButton *setGeoSquareBtn;
    QPushButton *addTranslateNodeBtn;
    QPushButton *addRotateNodeBtn;
    QPushButton *addScaleNodeBtn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *rotateSpinBox;
    QDoubleSpinBox *scalarXSpinBox;
    QDoubleSpinBox *scalarYSpinBox;
    QDoubleSpinBox *translateYSpinBox;
    QDoubleSpinBox *translateXSpinBox;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(976, 640);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mygl = new MyGL(centralWidget);
        mygl->setObjectName(QString::fromUtf8("mygl"));
        mygl->setGeometry(QRect(11, 11, 618, 592));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("The Puppet"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(640, 10, 321, 241));
        treeWidget->setColumnCount(1);
        setGeoSquareBtn = new QPushButton(centralWidget);
        setGeoSquareBtn->setObjectName(QString::fromUtf8("setGeoSquareBtn"));
        setGeoSquareBtn->setGeometry(QRect(750, 410, 121, 28));
        addTranslateNodeBtn = new QPushButton(centralWidget);
        addTranslateNodeBtn->setObjectName(QString::fromUtf8("addTranslateNodeBtn"));
        addTranslateNodeBtn->setGeometry(QRect(640, 500, 93, 28));
        addRotateNodeBtn = new QPushButton(centralWidget);
        addRotateNodeBtn->setObjectName(QString::fromUtf8("addRotateNodeBtn"));
        addRotateNodeBtn->setGeometry(QRect(750, 500, 93, 28));
        addScaleNodeBtn = new QPushButton(centralWidget);
        addScaleNodeBtn->setObjectName(QString::fromUtf8("addScaleNodeBtn"));
        addScaleNodeBtn->setGeometry(QRect(860, 500, 93, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(650, 260, 61, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(650, 300, 81, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(740, 300, 16, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(840, 300, 21, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(650, 340, 55, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(740, 340, 16, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(840, 340, 16, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(640, 470, 111, 16));
        rotateSpinBox = new QDoubleSpinBox(centralWidget);
        rotateSpinBox->setObjectName(QString::fromUtf8("rotateSpinBox"));
        rotateSpinBox->setGeometry(QRect(750, 260, 62, 22));
        rotateSpinBox->setMinimum(-360.000000000000000);
        rotateSpinBox->setMaximum(360.000000000000000);
        scalarXSpinBox = new QDoubleSpinBox(centralWidget);
        scalarXSpinBox->setObjectName(QString::fromUtf8("scalarXSpinBox"));
        scalarXSpinBox->setGeometry(QRect(770, 340, 62, 22));
        scalarXSpinBox->setMinimum(-99.000000000000000);
        scalarXSpinBox->setSingleStep(0.250000000000000);
        scalarYSpinBox = new QDoubleSpinBox(centralWidget);
        scalarYSpinBox->setObjectName(QString::fromUtf8("scalarYSpinBox"));
        scalarYSpinBox->setGeometry(QRect(870, 340, 62, 22));
        scalarYSpinBox->setMinimum(-99.000000000000000);
        scalarYSpinBox->setSingleStep(0.250000000000000);
        translateYSpinBox = new QDoubleSpinBox(centralWidget);
        translateYSpinBox->setObjectName(QString::fromUtf8("translateYSpinBox"));
        translateYSpinBox->setGeometry(QRect(870, 300, 62, 22));
        translateYSpinBox->setMinimum(-10.000000000000000);
        translateYSpinBox->setMaximum(10.000000000000000);
        translateYSpinBox->setSingleStep(0.250000000000000);
        translateXSpinBox = new QDoubleSpinBox(centralWidget);
        translateXSpinBox->setObjectName(QString::fromUtf8("translateXSpinBox"));
        translateXSpinBox->setGeometry(QRect(770, 300, 62, 22));
        translateXSpinBox->setDecimals(2);
        translateXSpinBox->setMinimum(-10.000000000000000);
        translateXSpinBox->setMaximum(10.000000000000000);
        translateXSpinBox->setSingleStep(0.250000000000000);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 976, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Scene Graph", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        setGeoSquareBtn->setText(QCoreApplication::translate("MainWindow", "SetGeoSquare", nullptr));
        addTranslateNodeBtn->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        addRotateNodeBtn->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        addScaleNodeBtn->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Rotation:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Translation:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Scalar:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Add a new Node:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
