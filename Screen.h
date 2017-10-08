#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <ostream>

using namespace std;

class Screen
{
//! Variáveis privadas da classe, acessíveis apenas aos membros da classe
private:
    //! Variáveis usadas para armazena o tamanho da tela de desenho
    //! nlin =número de linhas
    //! ncol = número de colunas
    int nlin, ncol;

    //! Variável usada para guardar o caractere usado para desenhar
    char brush;

    //! Variável para armazenar a matriz da tela
    vector< vector<char> > mat;

    //! Variáveis públicas, acessíveis a todos
public:
    //! construtor da classe
    //! Inicializa a matriz com o número de linhas e colunas dados pelo usuário
    Screen(int nlin_, int ncol_);

    //! desenha um pixel da matriz usando o caratere guardado em 'brush'
    void setPixel(int x, int y);

    //! limpa a tela
    void clear();

    //! muda o caractere de desenho
    void setBrush(char brush);

    //! envia a tela para um stream de saida
   friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
//arquivos do projeto devem ser incluidos com ""
