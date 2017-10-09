#include "reta.h"
#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Reta::Reta
 * @param _x0
 * @param _y0
 * @param _x1
 * @param _y1
 */
Reta::Reta(int x0, int y0, int x1, int y1)
{
    //inicializa as variáveis
    this->x0=x0;
    this->x1=x1;
    this->y0=y0;
    this->y1=y1;

    //calcula o tamanho à partir das maiores posições
    if(abs(x1-x0) > abs(y1-y0))
        tam=abs(x1-x0);
    else
        tam = abs(y1-y0);

    deltaX =(x1-x0)/tam;
    deltaY = (y1-y0)/tam;

    //cálculo do coeficiente angular
    m= deltaY/deltaX;

    //cálculo do erro entre coordenada e ponto de rasterização
    //rasterização: definição do pixel a ser desenhado
    e= m - (1/2);

    //define as coordenadas iniciais a serem desenhadas
    x = x + deltaX;
    y = y+deltaY;
}

void Reta::draw(Screen &t)
{    
    for(i=1;i<=deltaX;i++)
    {
        //round : força o número a ser inteiro
        //define os pixels variando as posições com o loop
        t.setPixel(round(x),round(y));
        while(e >= 0){
            y+=1;
            e-=1;
        }
        x+=1;
        e+=m;
    }
}

//http://agostinhobritojr.github.io/cursos/cg/linhas.html#(8)
