#ifndef ITEMEMPRESTIMO_H
#define ITEMEMPRESTIMO_H

#include <iostream>
#include <string>
#include "Livro.h"
#include "Emprestimo.h"

class ItemEmprestimo
{
private:
    int dataParaDevolucao;
    int dataQueFoiDevolvido;

public:
    ItemEmprestimo(int dPD, int dQFD);
    int getDPDev() const;
    int getDQFDev() const;

    void setDPDev(const int dataParaDevolucao);
    void setDQFDev(const int dataQueFoiDevolvido);
    void dadosItemEmprestimo() const;
};

#endif