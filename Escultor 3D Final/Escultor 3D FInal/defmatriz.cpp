#include "defmatriz.h"
#include "ui_defmatriz.h"

DefMatriz::DefMatriz(QWidget *parent) :
    //a partir da caixa de diálogo ele vai relacionar os dados inseridos pelo usuário

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
