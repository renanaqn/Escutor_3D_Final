#include "plotter.h"
#include "sculptor.h"
#include <QPaintEvent>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <QMouseEvent>
#include <algorithm>
#include <cmath>
#include<cstdlib>
#include<iostream>
using namespace std;

// O plotter ele tem a função de organizar o que está rolando
// saber onde está o mouse, qual ferramenta selecionada
Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
    numx = numy = numz =0;

    s = new Sculptor(numx,numy,numz);
    ix = iy = iz = 0;
    L = H = 0;
    forma = " ";
    xc = yc = zc = raio =0;

    cor = QColor(0,0,0,255);

}

void Plotter::mousePressEvent(QMouseEvent *event){

    if(numx !=0 && numy !=0 && numz !=0){
        if(event->button() == Qt::LeftButton){

            int pos_coluna = event->x();
            int pos_linha = event->y();

            ix = pos_linha/H;
            iy = pos_coluna/L;


            if(forma.compare("PutVoxel",Qt::CaseInsensitive) == 0){

                    s->setColor(cor.red()/255.0f,cor.green()/255.0f,cor.blue()/255.0f,cor.alpha()/255.0f);
                    ativaVoxel(geraSculptor[iz][ix][iy],cor);
                    s->putVoxel(ix,iy,iz);

            }else if (forma.compare("PutBox",Qt::CaseInsensitive) == 0) {
                for(int k=0; k<zc;k++){
                    for(int i=0;i<xc;i++){
                        for(int j=0; j<yc;j++){
                                ativaVoxel(geraSculptor[iz+k][ix+i][iy+j],cor);
                                s->putVoxel(ix+i,iy+j,iz+k);

                        }
                    }
                }
            }   else if (forma.compare("PutSphere",Qt::CaseInsensitive) == 0) {
                for(int k=iz - raio; k<=iz + raio; k++){
                    for (int i=ix - raio; i<=ix + raio; i++) {
                        for (int j=iy - raio; j<=iy + raio; j++){
                           double d = pow(i-ix,2) + pow(j-iy,2) + pow(k-iz,2);
                           if (d <= pow(raio,2)){
                                   ativaVoxel(geraSculptor[0][i][j],cor);
                                   s->putVoxel(i,j,0);
                           }
                        }
                    }
                }
            }else if(forma.compare("CutVoxel",Qt::CaseInsensitive) == 0){
                desativaVoxel(geraSculptor[iz][ix][iy]);
                s->cutVoxel(ix,iy,iz);
            } else if (forma.compare("CutBox",Qt::CaseInsensitive) == 0) {
                for(int k=0; k<zc;k++){
                    for(int i=0;i<xc;i++){
                        for(int j=0; j<yc;j++){
                                desativaVoxel(geraSculptor[iz+k][ix+i][iy+j]);
                                s->cutVoxel(ix+i,iy+j,iz+k);

                        }
                    }
                }
            }   else if (forma.compare("CutSphere",Qt::CaseInsensitive) == 0) {
                for(int k=iz - raio; k<=iz + raio; k++){
                    for (int i=ix - raio; i<=ix + raio; i++) {
                        for (int j=iy - raio; j<=iy + raio; j++){
                           double d = pow(i-ix,2) + pow(j-iy,2) + pow(k-iz,2);
                           if (d <= pow(raio,2)){
                                   desativaVoxel(geraSculptor[0][i][j]);
                                   s->cutVoxel(i,j,0);
                           }
                        }
                    }
                }
            }





            defz = geraSculptor[iz];
            repaint();
        }
   }
}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    painter.setRenderHint(QPainter::Antialiasing);

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(2);

    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(0,0,width(),height());

    if(numx !=0 && numy!=0 && numz!=0){
         H = (double)height()/numx;
         L = (double)width()/numy;

         pen.setWidth(1);
         painter.setPen(pen);

         for (int i=1;i<=numx;i++){
            painter.drawLine(0,i*H,width(),i*H);
        }

         for (int i=1;i<=numy;i++){
            painter.drawLine(i*L,0,i*L,height());
        }

    }

    brush.setColor(QColor(0,0,0));
    painter.setBrush(brush);
    for (int i=0;i<numx;i++) {
        for(int j=0; j<numy; j++){
            if (defz[i][j].isOn == true){
                int pos_linha = i*H;
                int pos_coluna = j*L;

                brush.setColor(QColor(211, 215, 207));
                painter.setBrush(brush);
                painter.drawRect(pos_coluna,pos_linha,L,H);

                Voxel aux = defz[i][j];
                brush.setColor(QColor(aux.r,aux.g,aux.b,aux.a));
                painter.setBrush(brush);
                painter.drawRect(pos_coluna,pos_linha,L,H);
            }
        }
    }
}



void Plotter::definirMatriz()
{
    DefMatriz Matriz;
    if(Matriz.exec() == QDialog::Accepted){

        numx = Matriz.get_x();
        numy = Matriz.get_y();
        numz = Matriz.get_z();

        if(numx !=0 && numy!=0 && numz!=0){
            Voxel voxel_zero;
            voxel_zero.r = voxel_zero.b = voxel_zero.g = 0;
            voxel_zero.a = 0.0f;
            voxel_zero.isOn = false;

            geraSculptor.clear();
            for (int k=0;k<numz;k++) {
                vector<vector<Voxel>> aux1;
                for(int i=0;i<numx; i++){
                    vector<Voxel> aux2;
                    for(int j=0;j<numy; j++){
                        aux2.push_back(voxel_zero);
                    }
                    aux1.push_back(aux2);
                }
                geraSculptor.push_back(aux1);
            }

            defz = geraSculptor[0];
            delete s;
            s = new Sculptor(numx,numy,numz);
            emit alteraSlidersX(0,numx-1);
            emit alteraSlidersY(0,numy-1);
            emit alteraSlidersZ(0,numz-1);

            int re[] = {numx-1,numy-1,(numz-1)};
            emit alteraSliderRaioEsfera(0,*min_element(re,re+3));

            repaint();
            }
    }
}

void Plotter::formaSel(QString _forma){
    forma = _forma;
}


void Plotter::defR(int _r){
    cor.setRed(_r);
}
void Plotter::defB(int _b){
    cor.setBlue(_b);
}
void Plotter::defG(int _g){
    cor.setGreen(_g);
}
void Plotter::defA(int _a){
    cor.setAlpha(_a);
}


void Plotter::ativaVoxel(Voxel &v, QColor cor){
    v.isOn = true;
    v.r = cor.red();
    v.g = cor.green();
    v.b = cor.blue();
    v.a = cor.alpha();
}
void Plotter::desativaVoxel(Voxel &v){
    v.isOn = false;
}
void Plotter::defCx(int _x){
    xc = _x;
}

void Plotter::defCy(int _y){
    yc = _y;
}

void Plotter::defCz(int _z){
    zc = _z;
}
void Plotter::defRaio(int _re){
    raio = _re;
}

void Plotter::salvaEscultor(){
    s->writeOFF((char*) "desenho.off");
}
