#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>

#include "FiguraGeometrica.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"
#include "Screen.h"

using namespace std;

int main()
{ 
    Screen tela(20,20);

    ifstream entrada;
    ofstream saida;
    string c;
    string s;
    stringstream ss;

    entrada.open("C:/Users/D2/Downloads/figuras.txt");
    saida.open("C:/Users/D2/Downloads/saida.txt");

    if(entrada.is_open()){
        cout << "abriu arquivo de entrada\n";
    }
    else{
        cout << "nao abriu arquivo\n";
    }

    while(entrada.good()){
        getline(entrada,c);
        stringstream ss(c);
        ss >> s;
        if(s=="dim"){
            int largura, altura;
            ss >> largura >> altura;
            tela = Screen(largura,altura);
        }
        if(s=="brush"){
            char x;
            ss >> x;
            if(ss.good()){
                tela.setBrush(x);
            }
            else{
                tela.setBrush(' ');
            }
        }
        if(s=="line"){
            int x0, y0, x1, y1;
            ss >> x0 >> y0 >> x1 >> y1;
            Reta r(x0,y0,x1,y1);
            r.draw(tela);
        }
        if(s=="rectangle"){
            int x0, y0, largura, altura;
            ss >> x0 >> y0 >> largura >> altura;
            Retangulo ret(x0,y0,largura,altura);
            ret.draw(tela);
        }
        if(s=="circle"){
            int x0, y0, raio;
            bool fillmode;
            ss >> x0 >> y0 >> raio >> fillmode;
            Circulo c(x0,y0,raio,fillmode);
            c.draw(tela);
        }
        cout << tela;

    }

    saida << tela;
    vector <FiguraGeometrica*> figuras;

    tela.setBrush('*');

    //tela.setPixel(8,7);
    //cout<<tela<<endl;
    //tela.clear();
    //cout<<tela;


    figuras.push_back(new Reta(9,4,19,19));
    figuras.push_back(new Retangulo(10,10,2,5));
    figuras.push_back(new Circulo(3,15,3,1));
    figuras.push_back(new Circulo(7,10,2,0));

    for(int i=0;i<figuras.size();i++){
        figuras[i]->draw(tela);
    }
    cout<<tela;

    return 0;
}
