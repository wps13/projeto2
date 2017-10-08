#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"
#include "Screen.h"

class Circulo : public FiguraGeometrica
{
private:
    int x,y,x1,y1;
    int diametro,raio;
public:
    Circulo(int _x, int y, int r);
    void draw(Screen &t);
};

#endif // CIRCULO_H
