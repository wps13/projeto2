#include "retangulo.h"
/**
 * @brief Retangulo::Retangulo
 * @param x0
 * @param y0
 * @param lar
 * @param alt
 */
Retangulo::Retangulo(int x0, int y0, int lar, int alt)
{
    //inicia as variáveis
    this->x0=x0;
    this->y0=y0;
    this->lar=lar;
    this->alt=alt;
}

//preenche todas as posições dadas com o caractere selecionado
/**
 * @brief Retangulo::draw
 * @param t
 */
void Retangulo::draw(Screen &t)
{
    i=0;
    j=0;

    for(i=x0;i<x0+lar;i++){
        for(j=y0;j<y0+alt;j++){
            t.setPixel(i,j);
        }
    }
}
