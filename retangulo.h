#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"
#include "Screen.h"

class Retangulo : public FiguraGeometrica
{
private:
    //lar:largura, alt:altura
    int lar,alt;
    //coordenadas do ponto superior esquerdo
    int x0,y0;
    //variáveis a serem usadas no loop
    int i,j;

public:
    //! construtor do objeto "retângulo"
    //! recebe o ponto superior esquerdo,largura(lar) e altura(alt)
    Retangulo(int x0,int y0,int lar,int alt);

    //! Implementação para desenhar o retângulo na tela(t)
    void draw(Screen &t);
};

#endif // RETANGULO_H
