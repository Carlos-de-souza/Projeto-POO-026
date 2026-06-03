#include "ItemEmprestimo.h"

ItemEmprestimo::ItemEmprestimo(int codExemplar) : codigoDoExemplar(codExemplar)
{
}

// Getters
int ItemEmprestimo::getCodigoDoExemplar() const
{
    return codigoDoExemplar;
}

// Setters
void ItemEmprestimo::setCodigoDoExemplar(int codExemplar)
{
    this->codigoDoExemplar = codExemplar;
}

// Metodos
// Imprime qual exemplar faz parte deste item de emprestimo
void ItemEmprestimo::imprimirDadosItem() const
{
    cout << "Exemplar: " << codigoDoExemplar << endl;
}
