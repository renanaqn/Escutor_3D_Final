#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

//Construtor com alocação de memória dinâmica
Sculptor::Sculptor(int _nx, int _ny, int _nz){
    int x,y,z;
    nx = _nx;
    ny = _ny;
    nz = _nz;

    v = new Voxel**[nx];

    for(x=0; x<nx; x++){
         v[x] = new Voxel*[nx*ny];
    }
    for(x=0; x<nx; x++){
        for(y=0; y<ny; y++){
            v[x][y]= new Voxel[nz*ny*nx];
         v[x] = new Voxel*[ny];
         for(y=0; y<ny; y++){
            v[x][y]= new Voxel[nz];
        }
    }
}
}

//Destrutor com liberação de memoria alocada
Sculptor::~Sculptor(){
    for (int x=0; x<nx; x++){
        for(int y=0; y<ny; y++){
            delete[] v[x][y];
        }
    }
    for (int x=0; x<nx; x++){
        delete[] v[x];
    }
    delete[] v;
}
//fixa uma cor para o voxel
void Sculptor::setColor(float r, float g, float b, float alpha){
    //variáveis correspondentes às cores vermelha, verde e azul;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = alpha; //variável correspondente à transparência;
}

//o voxel será exibido no escultor
void Sculptor::putVoxel(int x, int y, int z){
    if( (x>=nx || x<0)  ||  (y>=ny || y<0)  ||  (z>=nz || z<0) ){
        cout << "Os valores indicados ultrapassam os limites da matriz " << nx << " x " << ny << " x " << nz << endl;
        exit(0);
    }
    v[x][y][z].isOn = true;
    v[x][y][z].a = a;
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
}
//o voxel não será exibido no escultor.
void Sculptor::cutVoxel(int x, int y, int z){
    if( (x>=nx || x<0)  ||  (y>=ny || y<0)  ||  (z>=nz || z<0) ){
        cout << "Os valores indicados ultrapassam os limites da matriz " << nx << " x " << ny << " x " << nz << endl;
        exit(0);
    }
    v[x][y][z].isOn = false;
}

//Coloca voxels em formato de uma caixa
void Sculptor::putBox(int xi, int xf, int yi, int yf, int zi, int zf){
    int i,j,k;
        for(i=xi;i<xf; i++){
          for(j=yi; j<yf; j++){
            for(k=zi; k<zf; k++){
                putVoxel(i,j,k);

            }
        }
    }
}

//Tira voxels em formato de uma caixa
void Sculptor::cutBox(int xi, int xf, int yi, int yf, int zi, int zf){
    int i,j,k; //coordenadas x,y,z
    for(i=xi; i<=xf; i++){
        for(j=yi; j<=yf; j++){
            for(k=zi; k<=zf; k++){

                cutVoxel(i,j,k);

            }
        }
    }

}

//Cria voxels em formato de uma esfera
void Sculptor::putSphere(int xc, int yc, int zc, int raio){
    int i,j,k,dxs,dys,dzs;
    if( ((xc+raio)>=nx || (xc+raio)<0)  ||  ((yc+raio)>=ny || (yc+raio)<0)  ||  ((zc+raio)>=nz || (zc+raio)<0)){
        cout << "Os valores indicados ultrapassam os limites da matriz " << nx << " x " << ny << " x " << nz << endl;
        exit(0);
    }
    //teste da equação da esfera
    for(i=0; i<=nx; i++){
        for(j=0; j<=ny; j++){
            for(k=0; k<=nz; k++){
                dxs=i-xc; dys=j-yc;dzs=k-zc;
                if((pow(dxs,2)+pow(dys,2)+pow(dzs,2))<=pow(raio,2)){
                    putVoxel(i,j,k);
                }
            }
        }
    }

}


//Tira voxels em formato de esfera
void Sculptor::cutSphere(int xc, int yc, int zc, int raio){
    // seguindo a mesma lógica do putSphere, porém agora ao invés de chamar putVoxel será chamado a função cutVoxel, para retirar um voxel.
    int i,j,k,dxs,dys,dzs;
    if( ((xc+raio)>=nx || (xc+raio)<0)  ||  ((yc+raio)>=ny || (yc+raio)<0)  ||  ((zc+raio)>=nz || (zc+raio)<0)){
        cout << "Os valores indicados ultrapassam os limites da matriz " << nx << " x " << ny << " x " << nz << endl;
        exit(0);
    }
    //teste da equação da esfera
    for(i=0; i<=nx; i++){
        for(j=0; j<=ny; j++){
            for(k=0; k<=nz; k++){
                dxs=i-xc; dys=j-yc;dzs=k-zc;
                if((pow(dxs,2)+pow(dys,2)+pow(dzs,2))<=pow(raio,2)){
                    cutVoxel(i,j,k);
                }
            }
        }
    }

}

//Cria voxels em formato de uma elipsóide
void Sculptor::putEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz){
    if( ((xc+rx)>=nx || (xc+rx)<0)  ||  ((yc+ry)>=ny || (yc+ry)<0)  ||  ((zc+rz)>=nz || (zc+rz)<0)){
        cout << "Valores indicados ultrapassam os limites da matriz " << nx << " x " << ny << " x " << nz << endl;
        exit(0);
    }
    int i,j,k;
    //teste da equação do elipsóide
    for(i=0; i<=nx; i++){
        for(j=0; j<=ny; j++){
            for(k=0; k<=nz; k++){
                if((pow((i-xc),2) / pow(rx,2) + pow((j-yc),2) / pow(ry,2) + pow((k-zc),2) / pow(rz,2)) <= 1.0){
                    putVoxel(i,j,k);
                }
            }
        }
    }

}

//Tira voxels em formato de uma elípsoide
void Sculptor::cutEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz){
    if( ((xc+rx)>=nx || (xc+rx)<0)  ||  ((yc+ry)>=ny || (yc+ry)<0)  ||  ((zc+rz)>=nz || (zc+rz)<0)){
        cout << "Valores indicados ultrapassam os limites da matriz " << nx << " x " << ny << " x " << nz << endl;
        exit(0);
    }
    int i,j,k;
    for(i=0; i<=nx; i++){
        for(j=0; j<=ny; j++){
            for(k=0; k<=nz; k++){
                //teste da equação do elipsóide
                if((pow((i-xc),2) / pow(rx,2) + pow((j-yc),2) / pow(ry,2) + pow((k-zc),2) / pow(rz,2)) <= 1.0){
                    cutVoxel(i,j,k);
                }
            }
        }
    }

}

//Gerar aquivo .OFF
void Sculptor::writeOFF(const char *nome){
    int Nvoxels=0,x,y,z;
    ofstream fout;
    fout.open(nome); //Abertura do fluxo de arquivo
    if(! fout.is_open()){
        cout << "Falha na criação do arquivo\n";
        exit(1);
    }else
        cout << "Gerando Arquivo...\n";
    fout<<"OFF"<<endl; //Identificação do tipo de arquivo OFF
    //Conta os voxels ativos
        for(x=0;x<nx;x++){
            for(y=0;y<ny;y++){
                for(z=0;z<nz;z++){
                    if(v[x][y][z].isOn){
                        Nvoxels++;
                    }
                }
            }
        }
    //Conta a quantidade de faces e vertices da projeção
     int Nv=8*Nvoxels;
     int Nf=6*Nvoxels;
     fout<<Nv<<" "<<Nf<<" "<<0<<endl;
     //Definição das cordenadas espaciais dos voxels ativos
        for(x=0;x<nx;x++){
            for(y=0;y<ny;y++){
                for(z=0;z<nz;z++){
                    if(v[x][y][z].isOn == true){
                            fout<< x-0.5 <<" "<< y+0.5 <<" "<< z-0.5 <<endl;
                            fout<< x-0.5 <<" "<< y-0.5 <<" "<< z-0.5 <<endl;
                            fout<< x+0.5 <<" "<< y-0.5 <<" "<< z-0.5 <<endl;
                            fout<< x+0.5 <<" "<< y+0.5 <<" "<< z-0.5 <<endl;
                            fout<< x-0.5 <<" "<< y+0.5 <<" "<< z+0.5 <<endl;
                            fout<< x-0.5 <<" "<< y-0.5 <<" "<< z+0.5 <<endl;
                            fout<< x+0.5 <<" "<< y-0.5 <<" "<< z+0.5 <<endl;
                            fout<< x+0.5 <<" "<< y+0.5 <<" "<< z+0.5 <<endl;
                    }
                }
            }
        }
    //Definição das faces dos voxels a partir dos vertices
    int contador = 0;
    fixed(fout);
    for(x = 0; x<nx; x++){
        for(y = 0; y<ny; y++){
            for(z = 0; z<nz; z++){
                if(v[x][y][z].isOn == true){
                    int cord = 8*contador;
                    fout << 4 <<" "<< cord+0 <<" "<< cord+3 <<" "<< cord+2 <<" "<< cord+1 <<" "<< v[x][y][z].r <<" " << v[x][y][z].g <<" "<< v[x][y][z].b <<" "<< v[x][y][z].a <<endl;
                    fout << 4 <<" "<< cord+4 <<" "<< cord+5 <<" "<< cord+6 <<" "<< cord+7 <<" "<< v[x][y][z].r <<" " << v[x][y][z].g <<" "<< v[x][y][z].b <<" "<< v[x][y][z].a <<endl;
                    fout << 4 <<" "<< cord+0 <<" "<< cord+1 <<" "<< cord+5 <<" "<< cord+4 <<" "<< v[x][y][z].r <<" " << v[x][y][z].g <<" "<< v[x][y][z].b <<" "<< v[x][y][z].a <<endl;
                    fout << 4 <<" "<< cord+0 <<" "<< cord+4 <<" "<< cord+7 <<" "<< cord+3 <<" "<< v[x][y][z].r <<" " << v[x][y][z].g <<" "<< v[x][y][z].b <<" "<< v[x][y][z].a <<endl;
                    fout << 4 <<" "<< cord+3 <<" "<< cord+7 <<" "<< cord+6 <<" "<< cord+2 <<" "<< v[x][y][z].r <<" " << v[x][y][z].g <<" "<< v[x][y][z].b <<" "<< v[x][y][z].a <<endl;
                    fout << 4 <<" "<< cord+1 <<" "<< cord+2 <<" "<< cord+6 <<" "<< cord+5 <<" "<< v[x][y][z].r <<" " << v[x][y][z].g <<" "<< v[x][y][z].b <<" "<< v[x][y][z].a <<endl;
                    contador++;
                }
            }
        }
    }
    cout << "Arquivo gerado!! \n";
    fout.close(); //Fecha fluxo de arquivo
}
