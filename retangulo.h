#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"
#include "Screen.h"

class Retangulo : public FiguraGeometrica
{
private:
    int lar,alt;
    int x0,y0;
    int i,j;
public:
    Retangulo(int x0,int y0,int lar,int alt);
    void draw(Screen &t);
};

#endif // RETANGULO_H
