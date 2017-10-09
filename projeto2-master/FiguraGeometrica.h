#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Screen.h"

class FiguraGeometrica
{
public:
    //! Método que inicia polimorfismo
    FiguraGeometrica();
    ~FiguraGeometrica();
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
