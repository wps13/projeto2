#include "Screen.h"
#include <iostream>
#include <vector>

using namespace std;

Screen::Screen(int nlin, int ncol)
{
    //inicia as variáveis das linhas e colunas
    this->nlin=nlin;
    this->ncol=ncol;

    //reserva espaço na memória para matriz de vetores
    mat = vector< vector<char> >(nlin,vector<char>(ncol,0));

    //preenche a matriz com o caractere '|'
    for(int i=0;i<nlin;i++)
    {
        for(int j=0;j<ncol;j++)
        {
            mat[i][j] = '|';
        }
    }
}

//coloca o caractere selecionado na posição dada
//caso a mesma seja dentro da tela
void Screen::setPixel(int x, int y)
{
    if(x<=nlin && y<=ncol)
    mat[x][y] = brush;
}

//reseta a matriz para o caractere inicial
void Screen::clear()
{
    for(int i=0;i<nlin;i++)
    {
        for(int j=0;j<ncol;j++)
        {
            mat[i][j] = '|' ;
        }
    }
}

//define o caractere dado como o pincel
void Screen::setBrush(char brush)
{
    this->brush = brush;
}

//sobrecarga do operador <<
//funciona como uma função para imprimir
ostream& operator<<(ostream &os, Screen &t)
{
    for(int i=0;i<t.nlin;i++)
    {
        for(int j=0;j<t.ncol;j++)
        {
            os<<t.mat[i][j];
        }
    }
    return os;
}


