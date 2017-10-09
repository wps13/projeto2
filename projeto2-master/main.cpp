#include <iostream>
#include "FiguraGeometrica.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"
#include "Screen.h"

using namespace std;

int main()
{
    Screen tela(30,40);
    tela.setBrush('*');
    tela.setPixel(8,7);
    cout<<tela<<endl;
    tela.clear();
    cout<<tela;

    return 0;
}
