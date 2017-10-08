#include "Screen.h"
#include <iostream>
#include <vector>

using namespace std;

Screen::Screen(int nlin_, int ncol_)
{
    nlin=nlin_;
    ncol=ncol_;

    mat = vector< vector<char> >(nlin,vector<char>(ncol,0));

    for(int i=0;i<nlin;i++)
    {
        for(int j=0;j<ncol;j++)
        {
            mat[i][j] = '|';
        }
    }
}

void Screen::setPixel(int x, int y)
{
    mat[x][y] = brush;
}

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

void Screen::setBrush(char brush)
{
    this->brush = brush;
}

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


