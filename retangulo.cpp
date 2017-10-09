#include "retangulo.h"

Retangulo::Retangulo(int x0, int y0, int lar, int alt)
{
    this->x0=x0;
    this->y0=y0;
    this->lar=lar;
    this->alt=alt;
}

void Retangulo::draw(Screen &t)
{
    i=0;
    j=0;
    for(i=x0;i<x0+lar;i++){
        for(j=y0;j<y0+alt;j++){
            t.setPixel(i,j);
        }
    }
}
