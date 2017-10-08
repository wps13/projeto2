#include "circulo.h"

Circulo::Circulo(int x, int y, int r)
{
    this->x=x;
    this->y=y;
    raio=r;
    x1=0;
    y1=raio;
    diametro = (1- raio);
}

void Circulo::draw(Screen &t)
{
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
