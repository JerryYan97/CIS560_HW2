/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(976, 640);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mygl = new MyGL(centralWidget);
        mygl->setObjectName(QStringLiteral("mygl"));
        mygl->setGeometry(QRect(11, 11, 618, 592));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("The Puppet"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(640, 10, 321, 241));
        treeWidget->setColumnCount(1);
        setGeoSquareBtn = new QPushButton(centralWidget);
        setGeoSquareBtn->setObjectName(QStringLiteral("setGeoSquareBtn"));
        setGeoSquareBtn->setGeometry(QRect(750, 410, 121, 28));
        addTranslateNodeBtn = new QPushButton(centralWidget);
        addTranslateNodeBtn->setObjectName(QStringLiteral("addTranslateNodeBtn"));
        addTranslateNodeBtn->setGeometry(QRect(640, 500, 93, 28));
        addRotateNodeBtn = new QPushButton(centralWidget);
        addRotateNodeBtn->setObjectName(QStringLiteral("addRotateNodeBtn"));
        addRotateNodeBtn->setGeometry(QRect(750, 500, 93, 28));
        addScaleNodeBtn = new QPushButton(centralWidget);
        addScaleNodeBtn->setObjectName(QStringLiteral("addScaleNodeBtn"));
        addScaleNodeBtn->setGeometry(QRect(860, 500, 93, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(650, 260, 61, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(650, 300, 81, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(740, 300, 16, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(840, 300, 21, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(650, 340, 55, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(740, 340, 16, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(840, 340, 16, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(640, 470, 111, 16));
        rotateSpinBox = new QDoubleSpinBox(centralWidget);
        rotateSpinBox->setObjectName(QStringLiteral("rotateSpinBox"));
        rotateSpinBox->setGeometry(QRect(750, 260, 62, 22));
        rotateSpinBox->setMinimum(-360);
        rotateSpinBox->setMaximum(360);
        scalarXSpinBox = new QDoubleSpinBox(centralWidget);
        scalarXSpinBox->setObjectName(QStringLiteral("scalarXSpinBox"));
        scalarXSpinBox->setGeometry(QRect(770, 340, 62, 22));
        scalarXSpinBox->setMinimum(-99);
        scalarXSpinBox->setSingleStep(0.25);
        scalarYSpinBox = new QDoubleSpinBox(centralWidget);
        scalarYSpinBox->setObjectName(QStringLiteral("scalarYSpinBox"));
        scalarYSpinBox->setGeometry(QRect(870, 340, 62, 22));
        scalarYSpinBox->setMinimum(-99);
        scalarYSpinBox->setSingleStep(0.25);
        translateYSpinBox = new QDoubleSpinBox(centralWidget);
        translateYSpinBox->setObjectName(QStringLiteral("translateYSpinBox"));
        translateYSpinBox->setGeometry(QRect(870, 300, 62, 22));
        translateYSpinBox->setMinimum(-10);
        translateYSpinBox->setMaximum(10);
        translateYSpinBox->setSingleStep(0.25);
        translateXSpinBox = new QDoubleSpinBox(centralWidget);
        translateXSpinBox->setObjectName(QStringLiteral("translateXSpinBox"));
        translateXSpinBox->setGeometry(QRect(770, 300, 62, 22));
        translateXSpinBox->setDecimals(2);
        translateXSpinBox->setMinimum(-10);
        translateXSpinBox->setMaximum(10);
        translateXSpinBox->setSingleStep(0.25);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 976, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Scene Graph", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        setGeoSquareBtn->setText(QApplication::translate("MainWindow", "SetGeoSquare", Q_NULLPTR));
        addTranslateNodeBtn->setText(QApplication::translate("MainWindow", "Translate", Q_NULLPTR));
        addRotateNodeBtn->setText(QApplication::translate("MainWindow", "Rotate", Q_NULLPTR));
        addScaleNodeBtn->setText(QApplication::translate("MainWindow", "Scale", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Rotation:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Translation:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "X:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Y:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Scalar:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "X:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Y:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Add a new Node:", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
