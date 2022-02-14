#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) 
{
    ui->setupUi(this);

    connect(ui->actionEscultor,SIGNAL(triggered(bool)),ui->widget,SLOT(definirMatriz()));


    connect(this,SIGNAL(txtTipo(QString)),ui->widget,SLOT(formaSel(QString)));

    //setcolor
    connect(ui->widget,SIGNAL(sliderR(int)),ui->sliderR,SLOT(setValue(int)));
    connect(ui->widget,SIGNAL(sliderG(int)),ui->sliderG,SLOT(setValue(int)));
    connect(ui->widget,SIGNAL(sliderB(int)),ui->sliderB,SLOT(setValue(int)));
    connect(ui->widget,SIGNAL(sliderA(int)),ui->sliderB,SLOT(setValue(int)));
    connect(ui->sliderR,SIGNAL(valueChanged(int)),ui->widget,SLOT(defR(int)));
    connect(ui->sliderG,SIGNAL(valueChanged(int)),ui->widget,SLOT(defG(int)));
    connect(ui->sliderB,SIGNAL(valueChanged(int)),ui->widget,SLOT(defB(int)));
    connect(ui->SliderA,SIGNAL(valueChanged(int)),ui->widget,SLOT(defA(int)));


    //putbox
    connect(ui->widget,SIGNAL(alteraSlidersX(int,int)),ui->sliderCx,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(alteraSlidersY(int,int)),ui->sliderCy,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(alteraSlidersZ(int,int)),ui->sliderCz,SLOT(setRange(int,int)));
    connect(ui->sliderCx,SIGNAL(valueChanged(int)),ui->widget,SLOT(defCx(int)));
    connect(ui->sliderCy,SIGNAL(valueChanged(int)),ui->widget,SLOT(defCy(int)));
    connect(ui->sliderCz,SIGNAL(valueChanged(int)),ui->widget,SLOT(defCz(int)));

    //putsphere
    connect(ui->widget,SIGNAL(alteraSliderRaioEsfera(int,int)),ui->sliderRaio,SLOT(setRange(int,int)));
    connect(ui->sliderRaio,SIGNAL(valueChanged(int)),ui->widget,SLOT(defRaio(int)));

    ultimaforma = "";

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::Sair(){
    exit(0);
}

void MainWindow::execTipo(bool){
    if (ultimaforma.compare(ui->actionPutVoxel->text()) == 0){
        ui->actionPutVoxel->setChecked(false);
    }if(ultimaforma.compare(ui->actionCutVoxel->text()) == 0){
        ui->actionCutVoxel->setChecked(false);
    }else if (ultimaforma.compare(ui->actionPutBox->text()) == 0) {
        ui->actionPutBox->setChecked(false);
    }else if (ultimaforma.compare(ui->actionCutBox->text()) == 0) {
        ui->actionCutBox->setChecked(false);
    }else if (ultimaforma.compare(ui->actionPutSphere->text()) == 0) {
        ui->actionPutSphere->setChecked(false);
    }else if (ultimaforma.compare(ui->actionCutSphere->text()) == 0) {
        ui->actionCutSphere->setChecked(false);
    }

    if(ui->actionPutVoxel->isChecked()){
        emit txtTipo(ui->actionPutVoxel->text());
        ultimaforma = ui->actionPutVoxel->text();
    }if(ui->actionCutVoxel->isChecked()){
        emit txtTipo(ui->actionCutVoxel->text());
        ultimaforma = ui->actionCutVoxel->text();
    }else if (ui->actionPutBox->isChecked()) {
        emit txtTipo(ui->actionPutBox->text());
        ultimaforma = ui->actionPutBox->text();
    }else if (ui->actionCutBox->isChecked()) {
        emit txtTipo(ui->actionCutBox->text());
        ultimaforma = ui->actionCutBox->text();
    }else if (ui->actionPutSphere->isChecked()) {
        emit txtTipo(ui->actionPutSphere->text());
        ultimaforma = ui->actionPutSphere->text();
    }else if (ui->actionCutSphere->isChecked()) {
        emit txtTipo(ui->actionCutSphere->text());
        ultimaforma = ui->actionCutSphere->text();
    }

}


