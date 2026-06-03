#ifndef ITEMRESERVA_H
#define ITEMRESERVA_H

#include <iostream>
#include <string>
#include "Livro.h"

using namespace std;

class ItemReserva
{
private:
    int nroDoItem;
    int dataRetirada;
    Livro livro;

public:
    ItemReserva(int nroDoItem, int dataRetirada, Livro &livro);
    int getNroDoItem() const;
    int getDataRetirada() const;
    Livro getLivro() const;

    void setNroDoItem(const int nroDoItem);
    void setDataRetirada(const int dataRetirada);
    void setLivro(const Livro livro);
};

#endif