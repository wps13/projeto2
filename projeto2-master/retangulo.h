#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"
#include "Screen.h"

class Retangulo : public FiguraGeometrica
{
private:
    int x,y, lar,alt;
public:
    Retangulo(int x,int y,int lar,int alt);
    void draw(Screen &t);
};

#endif // RETANGULO_H
