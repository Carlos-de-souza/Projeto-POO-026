#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include <iostream>
#include <string>
#include <vector>
#include "Usuario.h"
#include "ItemEmprestimo.h"
#include "ExemplarLivro.h"

using std::vector;

class Emprestimo
{
private:
    int codigo;
    Usuario *usuario;
    vector<ItemEmprestimo> itens;

public:
    Emprestimo(int cod, Usuario *us);

    // Getters
    int getCodigo() const;
    Usuario *getUsuario() const;
    vector<ItemEmprestimo> getItens() const;

    // Setters
    void setCodigo(int codigo);
    void setUsuario(Usuario *us);

    // Metodos
    void adicionarItem(ExemplarLivro &exemplar);
    void mostrarDetalhes() const;
};
#endif