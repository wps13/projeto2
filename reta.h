#ifndef RETA_H
#define RETA_H
#include "FiguraGeometrica.h"
#include "Screen.h"

class Reta : public FiguraGeometrica
{
    int x0,y0;
    int x1,y1;
    int tam,deltaX, deltaY;
    int i,x,y,m,e;

public:
    Reta(int x0, int y0, int x1, int y1);
    void draw(Screen &t);
};

#endif // RETA_H
