#include "circulo.h"
/**
 * @brief Circulo::Circulo
 * @param x
 * @param y
 * @param r
 * @param fill
 */
Circulo::Circulo(int x, int y, int r,int fill)
{
    this->x=x;
    this->y=y;
    this->fill=fill;
    raio=r;

}

/**
 * @brief Circulo::draw
 * @param t
 */
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


        t.setPixel(x+x1,y+y1);
        t.setPixel(x+x1,y-y1);
        t.setPixel(y1+x,x1+y);
        t.setPixel(y1+x,y-x1);
        t.setPixel(x-x1,y+y1);
        t.setPixel(x-x1,y-y1);
        t.setPixel(x-y1,y-x1);
        t.setPixel(x-y1,x1+y);

        if(fill==1)
        {
            int i,j;
            for(i=x-raio+x1;i<x+raio;i++){
                for(j=y-raio+x1;j<y+raio;j++)
                    t.setPixel(i,j);
            }

        }
    }
}


//http://www.demic.fee.unicamp.br/~jeff/ArquivosIndex/Bresenham
