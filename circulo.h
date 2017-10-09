#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"
#include "Screen.h"

class Circulo : public FiguraGeometrica
{
private:
    //x e y: coordenadas do ponto central
    //x1 e y1 : coordenasdas a serem usadas para fazer o desenho
    int x,y,x1,y1;

    //d: diamentro, raio: raio do círculo, dado pelo usuário
    int d,raio;

public:
    //! construtor do circulo
    //! Inicia o objeto à partir do ponto inicial(x,y) e raio(r)
    Circulo(int x, int y, int r);

    //! metódo para desenhar e preencher o circulo na tela
    void draw(Screen &t);
};

#endif // CIRCULO_H
