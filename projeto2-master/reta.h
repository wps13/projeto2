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
     *
*/
    int i,x,y,m,e;

public:
    Reta(int x0, int y0, int x1, int y1);
    void draw(Screen &t);
};

#endif // RETA_H
