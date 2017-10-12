#include "Screen.h"
#include <iostream>
#include <vector>

using namespace std;
/**
 * @brief Screen::Screen
 * @param nlin
 * @param ncol
 */
Screen::Screen(int nlin, int ncol)
{
    //inicia as variáveis das linhas e colunas
    this->nlin=nlin;
    this->ncol=ncol;

    //reserva espaço na memória para matriz de vetores
    mat = vector< vector<char> >(nlin,vector<char>(ncol,' '));
}

//coloca o caractere selecionado na posição dada
//caso a mesma seja dentro da tela
/**
 * @brief Screen::setPixel
 * @param x
 * @param y
 */
void Screen::setPixel(int x, int y)
{
    if(x>=0 && y >=0 && x<nlin && y<ncol){
        mat[x][y] = brush;
    }
}

//reseta a matriz para o caractere inicial
/**
 * @brief Screen::clear
 */
void Screen::clear()
{
    for(int i=0;i<nlin;i++)
    {
        for(int j=0;j<ncol;j++)
        {
            mat[i][j] = ' ' ;
        }
    }
}

//define o caractere dado como o pincel
/**
 * @brief Screen::setBrush
 * @param brush
 */
void Screen::setBrush(char brush)
{
    this->brush = brush;
}

//sobrecarga do operador <<
//funciona como uma função para imprimir
/**
 * @brief operator <<
 * @param os
 * @param t
 * @return
 */
ostream& operator<<(ostream &os, Screen &t)
{
    for(int i=0;i<t.nlin;i++)
    {
        for(int j=0;j<t.ncol;j++)
        {
            os<<t.mat[i][j];
        }
        os << endl;
    }
    return os;
}


