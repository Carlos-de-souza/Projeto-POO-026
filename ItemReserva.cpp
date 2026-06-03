#include "ItemReserva.h"

ItemReserva::ItemReserva(int nroDoItem, int dataRetirada, Livro &livro)
{
    this->nroDoItem = nroDoItem;
    this->dataRetirada = dataRetirada;
    this->livro = livro;
}

int ItemReserva::getNroDoItem() const
{
    
}

int ItemReserva::getDataRetirada() const
{
    
}

Livro ItemReserva::getLivro() const
{
    
}

void ItemReserva::setNroDoItem(const int nroDoItem)
{
    
}

void ItemReserva::setDataRetirada(const int dataRetirada)
{
    
}

void ItemReserva::setLivro(const Livro livro)
{
    this->livro = livro;
}