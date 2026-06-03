#ifndef ACERVO_H
#define ACERVO_H

#include <iostream>
#include <string>
#include <vector>
#include "Livro.h"

using std::vector;

class Acervo
{
private:
    vector<Livro> acervo;

public:
    Acervo();

    // Getters
    vector<Livro> getAcervo() const;

    // Metodos do diagrama
    void adicionarLivro(Livro livro);
    void removerLivro(int codigo);
    void listarLivros() const;
};

#endif