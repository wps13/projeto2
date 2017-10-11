#include <iostream>
#include <vector>

#include "FiguraGeometrica.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"
#include "Screen.h"

using namespace std;

int main()
{
    Screen tela(20,20);
    vector <FiguraGeometrica*> figuras;

    tela.setBrush('*');
    tela.setPixel(8,7);
    cout<<tela<<endl;
    tela.clear();
    cout<<tela;



    figuras.push_back(new Reta(8,8,19,19));
    //figuras.push_back(new Retangulo(10,10,2,5));
    figuras.push_back(new Circulo(5,5,3));

    for(int i=0;i<figuras.size();i++){
       figuras[i]->draw(tela);
    }
    cout<<tela;
    return 0;
}
