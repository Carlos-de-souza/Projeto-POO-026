#ifndef ITEMEMPRESTIMO_H
#define ITEMEMPRESTIMO_H

#include <iostream>
#include <string>
#include "ExemplarLivro.h"

using namespace std;

class ItemEmprestimo
{
private:
    int codigoDoExemplar;
    int dataParaDevolucao;
    int dataQueFoiDevolvido;

public:
    ItemEmprestimo(int codExemplar);

    // Getters
    int getCodigoDoExemplar() const;

    // Setters
    void setCodigoDoExemplar(int codExemplar);

    // Metodos
    void imprimirDadosItem() const;
};
#endif