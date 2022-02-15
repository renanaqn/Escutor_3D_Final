#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <vector>
#include <QColor>
#include <QString>
#include "defmatriz.h"
#include "sculptor.h"
using namespace std;
class Plotter : public QWidget {
    Q_OBJECT
private:
    int numx, numy, numz;
    vector<vector<vector<Voxel>>> geraSculptor;
    vector<vector<Voxel>> defz;
    Sculptor *s;
    QString forma;
    QColor cor;

    int ix, iy, iz;
    double L, H;
    int xc, yc, zc;
    int raio;

    void ativaVoxel(Voxel &v, QColor cor);
    void desativaVoxel(Voxel &v);
    bool dentroDosLimites(int linha, int coluna, int plano);

public:

    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

signals:
// esses são os sinais a serem utilizados durante a aplicação
    void alteraSlidersX(int,int);
    void alteraSlidersY(int,int);
    void alteraSlidersZ(int,int);
    void alteraSliderRaioEsfera(int,int);
    void alteraSliderR(int);
    void alteraSliderG(int);
    void alteraSliderB(int);


public slots:

    void definirMatriz();
    void salvaEscultor();
    void formaSel(QString _acao);
    void defCx(int _x);
    void defCy(int _y);
    void defCz(int _z);
    void defRaio(int _re);
    void defR(int _r);
    void defB(int _b);
    void defG(int _g);
    void defA(int _a);

};

#endif // PLOTTER_H
