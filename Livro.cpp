#include "Livro.h"
#include "Editora.h"
#include "Autor.h"

using namespace std;

Livro::Livro(int cod, string tit, int edi, float pre, Editora &edit, int anoPubli, int quantDeExem, int nroDiasPermEmp) : codigo(cod), titulo(tit), edicao(edi), preco(pre), editora(edit), anoPublicacao(anoPubli), quantidadeDeExemplares(quantDeExem), nroDiasPermitidoEmprestimo(nroDiasPermEmp)
{
}

int Livro::getCodigo()
{
    return codigo;
}

string Livro::getTitulo()
{
    return titulo;
}

int Livro::getEdicao()
{
    return edicao;
}

float Livro::getPreco()
{
    return preco;
}

Editora Livro::getEditora()
{
    return this->editora;
}

int Livro::getAnoPublicacao()
{
    return anoPublicacao;
}

int Livro::getQuantidadeDeExemplares()
{
    return quantidadeDeExemplares;
}

int Livro::getNroDiasPermitidoEmprestimo()
{
    return nroDiasPermitidoEmprestimo;
}

vector<Autor> Livro::getAutor()
{
}

int Livro::getStatusAgora()
{
}

int Livro::getStatusFuturo()
{
}

int Livro::getNroPaginas()
{
}

bool Livro::estaDisponivel() const
{
}

void Livro::criarExemplares(int numero)
{
}

ExemplarLivro Livro::getExemplarDisponivel() const
{
}

void Livro::apresentarLivro()
{
    cout << "---- LIVRO ----" << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Identificador: " << identificador << endl;
    editora.apresentarEditora();
}
