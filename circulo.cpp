#include "circulo.h"

Circulo::Circulo(int x, int y, int r,int fill)
{
    this->x=x;
    this->y=y;
    this->fill=fill;
    raio=r;

}

//desenha a circuferência com base no algoritmo de bresenham
//necessário verificar se preenche, o que não acho que faça
void Circulo::draw(Screen &t)
{
    x1=0;
    y1=raio;
    d = (1- raio);

    t.setPixel(x,y+y1);
    t.setPixel(x,y-y1);
    t.setPixel(x+y1,y);
    t.setPixel(x-y1,y);

    while(y1>x1){
        if(d<0){
            d=d + 2*x1 + 3;
            x1+=1;
        }
        else{
            d= d + 2*(x1-y1) + 5;
            x1+= 1;
            y1-=1;
        }

        if(fill==1)
        {
            for(int i=(x+x1-raio);i<x+raio;i++)
                for(int j=(y-raio);j<y+raio;j++)
                    t.setPixel(i,j);


        }
        t.setPixel(x+x1,y+y1);
        t.setPixel(x+x1,y-y1);
        t.setPixel(y1+x,x1+y);
        t.setPixel(y1+x,y-x1);
        t.setPixel(x-x1,y+y1);
        t.setPixel(x-x1,y-y1);
        t.setPixel(x-y1,y-x1);
        t.setPixel(x-y1,x1+y);

    }

}

//http://www.demic.fee.unicamp.br/~jeff/ArquivosIndex/Bresenham
