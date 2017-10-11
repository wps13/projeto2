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
Reta::Reta(int x1, int y1, int x2, int y2)
{
    //inicializa as variáveis
    this->x1=x1;
    this->y1=y1;
    this->x2=x2;
    this->y2=y2;
}

int Sinal(int x){
    if(x == 0)
        return 0;
    else if(x > 0)
        return 1;
    else
        return -1;
}

void Reta::draw(Screen &t)
{    
    int x, y, s1, s2,Troca,Temp;
    x = x1;
    y = y1;
    Delta_x = abs(x2 - x1);
    Delta_y = abs(y2 - y1);
    s1=Sinal(x2 - x1);
    s2=Sinal(y2 - y1);
    if(Delta_y > Delta_x){
        Temp = Delta_x;
        Delta_x = Delta_y;
        Delta_y = Temp;
        Troca = 1;
    }
    else{
        Troca = 0;
    }
    new_e = 2*Delta_y - Delta_x;
    for(i=1; i<= Delta_x; i++){
        t.setPixel(x,y);
        while (new_e >= 0){
            if(Troca == 1){
                //Muda para a proxima linha de rasterização
                x = x + s1;
            }
            else{
                y = y + s2;
            }
            new_e = new_e - 2*Delta_x;
        }

        //Permanece nesta linha de rasterização
        if(Troca == 1){
            y = y + s2;
        }
        else{
            x = x + s1;
        }
        new_e= new_e + 2*Delta_y;
    }
}

//http://agostinhobritojr.github.io/cursos/cg/linhas.html#(8)
