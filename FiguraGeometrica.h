#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Screen.h"

class FiguraGeometrica
{

public:
    //! Construtor da classe
    //! Irá criar a matriz de figuras geométricas
    FiguraGeometrica();

    //! destrutor da classe
    ~FiguraGeometrica();

     //! Método que inicia polimorfismo
     //! Obrigando à todas as classes herdeiras sua implementação
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
