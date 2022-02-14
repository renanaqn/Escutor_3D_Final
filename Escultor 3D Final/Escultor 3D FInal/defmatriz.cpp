#include "defmatriz.h"
#include "ui_defmatriz.h"

DefMatriz::DefMatriz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DefMatriz){
    ui->setupUi(this);
    }

DefMatriz::~DefMatriz(){
    delete ui;
}

int DefMatriz::get_x(){
    return ui->spinBox_x->value();
}
int DefMatriz::get_y(){
    return ui->spinBox_y->value();
}
int DefMatriz::get_z(){
    return ui->spinBox_z->value();
}
