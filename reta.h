#ifndef RETA_H
#define RETA_H
#include "FiguraGeometrica.h"
#include "Screen.h"

class Reta : public FiguraGeometrica
{
    //pontos iniciais da reta
    int x0,y0;
    //pontos finais da reta
    int x1,y1;
    /* tam=tamanho da reta
     * deltaX=calcula a distância entre os X's e divide pelo tam
     */
    int tam,deltaX, deltaY;
    /* m = coeficiente angular da reta
     * x e y são posições que serão alteradas para desenhar a reta
     * e = cálculo de erro a cada iteração
     */
    int i,x,y,m,e;

public:
    //! construtor do objeto
    //! recebe as coordenadas dos pontos inicial(x0,y0) e final(x1,y1)
    Reta(int x0, int y0, int x1, int y1);

    //! desenha a reta na tela à partir do algoritmo de bresenham
    void draw(Screen &t);
};

#endif // RETA_H
