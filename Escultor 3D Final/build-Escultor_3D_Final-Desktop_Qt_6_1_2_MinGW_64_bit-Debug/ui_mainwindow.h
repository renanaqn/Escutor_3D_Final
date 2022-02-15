/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <plotter.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEscultor;
    QAction *actionPutVoxel;
    QAction *actionCutVoxel;
    QAction *actionPutBox;
    QAction *actionCutBox;
    QAction *actionPutSphere;
    QAction *actionCutSphere;
    QAction *actionPutEllipsoid;
    QAction *actionCutEllipsoid;
    QAction *actionSalvar;
    QAction *actionSair;
    QAction *actionSalvar_2;
    QWidget *centralWidget;
    QLabel *label_4;
    Plotter *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QSpinBox *spinBox_5;
    QSlider *sliderCz;
    QLabel *label_7;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QLabel *label_6;
    QSlider *sliderCx;
    QSlider *sliderCy;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QSlider *sliderRaio;
    QSpinBox *spinBox_4;
    QLabel *label_12;
    QWidget *widget1;
    QGridLayout *gridLayout_4;
    QSlider *SliderA;
    QLabel *label_9;
    QWidget *widget2;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QSlider *sliderG;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QSlider *sliderR;
    QSlider *sliderB;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(941, 468);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionEscultor = new QAction(MainWindow);
        actionEscultor->setObjectName(QString::fromUtf8("actionEscultor"));
        QFont font;
        font.setPointSize(12);
        actionEscultor->setFont(font);
        actionPutVoxel = new QAction(MainWindow);
        actionPutVoxel->setObjectName(QString::fromUtf8("actionPutVoxel"));
        actionPutVoxel->setCheckable(true);
        actionPutVoxel->setChecked(false);
        actionCutVoxel = new QAction(MainWindow);
        actionCutVoxel->setObjectName(QString::fromUtf8("actionCutVoxel"));
        actionCutVoxel->setCheckable(true);
        actionPutBox = new QAction(MainWindow);
        actionPutBox->setObjectName(QString::fromUtf8("actionPutBox"));
        actionPutBox->setCheckable(true);
        actionCutBox = new QAction(MainWindow);
        actionCutBox->setObjectName(QString::fromUtf8("actionCutBox"));
        actionCutBox->setCheckable(true);
        actionPutSphere = new QAction(MainWindow);
        actionPutSphere->setObjectName(QString::fromUtf8("actionPutSphere"));
        actionPutSphere->setCheckable(true);
        actionCutSphere = new QAction(MainWindow);
        actionCutSphere->setObjectName(QString::fromUtf8("actionCutSphere"));
        actionCutSphere->setCheckable(true);
        actionPutEllipsoid = new QAction(MainWindow);
        actionPutEllipsoid->setObjectName(QString::fromUtf8("actionPutEllipsoid"));
        actionPutEllipsoid->setCheckable(true);
        actionCutEllipsoid = new QAction(MainWindow);
        actionCutEllipsoid->setObjectName(QString::fromUtf8("actionCutEllipsoid"));
        actionCutEllipsoid->setCheckable(true);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSalvar_2 = new QAction(MainWindow);
        actionSalvar_2->setObjectName(QString::fromUtf8("actionSalvar_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(1300, 990));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(590, 210, 171, 16));
        label_4->setFont(font);
        widget = new Plotter(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 531, 391));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(590, 230, 171, 80));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        spinBox_5 = new QSpinBox(layoutWidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        gridLayout_2->addWidget(spinBox_5, 1, 2, 1, 1);

        sliderCz = new QSlider(layoutWidget);
        sliderCz->setObjectName(QString::fromUtf8("sliderCz"));
        sliderCz->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderCz, 2, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        spinBox_6 = new QSpinBox(layoutWidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));

        gridLayout_2->addWidget(spinBox_6, 2, 2, 1, 1);

        spinBox_7 = new QSpinBox(layoutWidget);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));

        gridLayout_2->addWidget(spinBox_7, 0, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        sliderCx = new QSlider(layoutWidget);
        sliderCx->setObjectName(QString::fromUtf8("sliderCx"));
        sliderCx->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderCx, 0, 1, 1, 1);

        sliderCy = new QSlider(layoutWidget);
        sliderCy->setObjectName(QString::fromUtf8("sliderCy"));
        sliderCy->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderCy, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(590, 320, 171, 49));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        sliderRaio = new QSlider(layoutWidget1);
        sliderRaio->setObjectName(QString::fromUtf8("sliderRaio"));
        sliderRaio->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(sliderRaio, 1, 0, 1, 1);

        spinBox_4 = new QSpinBox(layoutWidget1);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        gridLayout_3->addWidget(spinBox_4, 1, 1, 1, 1);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        gridLayout_3->addWidget(label_12, 0, 0, 1, 2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(590, 150, 171, 49));
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        SliderA = new QSlider(widget1);
        SliderA->setObjectName(QString::fromUtf8("SliderA"));
        SliderA->setMaximum(255);
        SliderA->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(SliderA, 2, 0, 1, 1);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(590, 20, 171, 111));
        gridLayout = new QGridLayout(widget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 0, 0, 1, 2);

        sliderG = new QSlider(widget2);
        sliderG->setObjectName(QString::fromUtf8("sliderG"));
        sliderG->setMaximum(255);
        sliderG->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderG, 2, 1, 1, 1);

        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        sliderR = new QSlider(widget2);
        sliderR->setObjectName(QString::fromUtf8("sliderR"));
        sliderR->setMaximum(255);
        sliderR->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderR, 1, 1, 1, 1);

        sliderB = new QSlider(widget2);
        sliderB->setObjectName(QString::fromUtf8("sliderB"));
        sliderB->setStyleSheet(QString::fromUtf8(""));
        sliderB->setMaximum(255);
        sliderB->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderB, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 941, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setFont(font);
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionSair);
        menuMenu->addAction(actionSalvar_2);
        mainToolBar->addAction(actionEscultor);
        mainToolBar->addAction(actionPutVoxel);
        mainToolBar->addAction(actionCutVoxel);
        mainToolBar->addAction(actionPutBox);
        mainToolBar->addAction(actionCutBox);
        mainToolBar->addAction(actionPutSphere);
        mainToolBar->addAction(actionCutSphere);
        mainToolBar->addAction(actionPutEllipsoid);
        mainToolBar->addAction(actionCutEllipsoid);

        retranslateUi(MainWindow);
        QObject::connect(actionPutVoxel, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionCutVoxel, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionPutBox, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionCutBox, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionPutSphere, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionCutSphere, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionPutEllipsoid, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionCutEllipsoid, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(Sair()));
        QObject::connect(actionSalvar_2, &QAction::triggered, widget, qOverload<>(&Plotter::salvaEscultor));
        QObject::connect(sliderCx, &QSlider::valueChanged, spinBox_7, &QSpinBox::setValue);
        QObject::connect(sliderCy, &QSlider::valueChanged, spinBox_5, &QSpinBox::setValue);
        QObject::connect(sliderCz, &QSlider::valueChanged, spinBox_6, &QSpinBox::setValue);
        QObject::connect(sliderRaio, &QSlider::valueChanged, spinBox_4, &QSpinBox::setValue);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEscultor->setText(QCoreApplication::translate("MainWindow", "Escultor", nullptr));
        actionPutVoxel->setText(QCoreApplication::translate("MainWindow", "PutVoxel", nullptr));
        actionCutVoxel->setText(QCoreApplication::translate("MainWindow", "CutVoxel", nullptr));
        actionPutBox->setText(QCoreApplication::translate("MainWindow", "PutBox", nullptr));
        actionCutBox->setText(QCoreApplication::translate("MainWindow", "CutBox", nullptr));
        actionPutSphere->setText(QCoreApplication::translate("MainWindow", "PutSphere", nullptr));
        actionCutSphere->setText(QCoreApplication::translate("MainWindow", "CutSphere", nullptr));
        actionPutEllipsoid->setText(QCoreApplication::translate("MainWindow", "PutEllipsoid", nullptr));
        actionCutEllipsoid->setText(QCoreApplication::translate("MainWindow", "CutEllipsoid", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        actionSalvar_2->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Tamanho da Caixa", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Raio da Esfera", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Opacidade", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Cor do Voxel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Verde", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Vermelho", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Azul", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
