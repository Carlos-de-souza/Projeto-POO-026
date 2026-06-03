#ifndef GERENCIADORDEEMPRESTIMO_H
#define GERENCIADORDEEMPRESTIMO_H

#include <iostream>
#include <vector>
#include "Emprestimo.h"
#include "Usuario.h"

class GerenciadorDeEmprestimo
{
private:
    std::vector<Emprestimo> emprestimos;

public:
    GerenciadorDeEmprestimo();
    // Getters
    std::vector<Emprestimo> getEmprestimos() const;
    // Metodos do diagrama
    void criarEmprestimo(const Usuario *usuario, ExemplarLivro *exemplar);
    void listarTodosEmprestimosAtuais() const;
};

#endif