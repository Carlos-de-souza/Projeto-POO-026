#ifndef ACERVO_H
#define ACERVO_H

#include <iostream>
#include <string>
#include <vector>
#include "Livro.h"

using std::vector;

class Acervos
{
private:
    vector<Livro> acervo;

public:
    Acervo(vector<Livro> acv);
    Acervo();
    vector<Livro> getLivro() const;
    Livro getLivroCod(const int codigo); // retorna o código do livro em acervo

    void setLivro(const vector<Livro> &);
    void adicionarLivro(const livro &lv);
};

#endif