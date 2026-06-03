#include "Emprestimo.h"
#include <iostream>

using std::cout;
using std::endl;

Emprestimo::Emprestimo(int cod, Usuario *us) : codigo(cod), usuario(us)
{
}

// Getters
int Emprestimo::getCodigo() const
{
    return codigo;
}

Usuario *Emprestimo::getUsuario() const
{
    return usuario;
}

std::vector<ItemEmprestimo> Emprestimo::getItens() const
{
    return itens;
}

// Setters
void Emprestimo::setCodigo(int codigo)
{
    this->codigo = codigo;
}

void Emprestimo::setUsuario(Usuario *us)
{
    this->usuario = us;
}

// Metodos
// Adiciona um exemplar ao emprestimo e marca ele como EMPRESTADO
void Emprestimo::adicionarItem(ExemplarLivro &exemplar)
{
    ItemEmprestimo novoItem(exemplar.getNroDoExemplar());
    itens.push_back(novoItem);
    exemplar.setStatus(StatusEmprestimo::EMPRESTADO);
}

void Emprestimo::mostrarDetalhes() const
{
    cout << "Emprestimo: " << codigo << endl;
    cout << "Usuário: " << usuario->getNome() << endl;
    cout << "Itens: " << endl;
    for (int i = 0; i < itens.size(); i++)
    {
        itens[i].imprimirDadosItem();
    }
}