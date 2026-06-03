#include "Livro.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Livro::Livro(int cod, string t, int ed, float p, int anPubli, int quantEx, int nroDPEm, std::vector<Autor> &aut, int nroPag)
{
    codigo = cod;
    titulo = t;
    edicao = ed;
    preco = p;
    anoPublicacao = anPubli;
    quantidadeDeExemplares = quantEx;
    nroDiasPermitidoEmprestimo = nroDPEm;
    autores = aut;
    nroPaginas = nroPag;
    statusAgora = 0;
    statusFuturo = 0;
}

// Getters
int Livro::getCodigo() const
{
    return codigo;
}

std::string Livro::getTitulo() const
{
    return titulo;
}

int Livro::getEdicao() const
{
    return edicao;
}

float Livro::getPreco() const
{
    return preco;
}

int Livro::getAnoPublicacao() const
{
    return anoPublicacao;
}

int Livro::getQuantidadeDeExemplares() const
{
    return quantidadeDeExemplares;
}

int Livro::getNroDiasPermitidoEmprestimo() const
{
    return nroDiasPermitidoEmprestimo;
}

std::vector<Autor> Livro::getAutores() const
{
    return autores;
}

int Livro::getNroPaginas() const
{
    return nroPaginas;
}

// Setters
void Livro::setCodigo(int cod)
{
    codigo = cod;
}

void Livro::setTitulo(string t)
{
    titulo = t;
}

void Livro::setEdicao(int ed)
{
    edicao = ed;
}

void Livro::setPreco(float p)
{
    preco = p;
}

void Livro::setAnoPublicacao(int anPubli)
{
    anoPublicacao = anPubli;
}

void Livro::setQuantidadeDeExemplares(int quantEx)
{
    quantidadeDeExemplares = quantEx;
}

void Livro::setNroDiasPermitidoEmprestimo(int nroDPEm)
{
    nroDiasPermitidoEmprestimo = nroDPEm;
}

void Livro::setAutores(std::vector<Autor> &aut)
{
    autores = &aut;
}

void Livro::setNroPaginas(int _n)
{
    nroPaginas = _n;
}

// Metodos do diagrama

// Verifica se existe pelo menos um exemplar disponivel
bool Livro::estaDisponivel() const
{
    for (int i = 0; i < (int)exemplares.size(); i++)
    {
        if (exemplares[i].getStatus() == StatusEmprestimo::DISPONIVEL)
        {
            return true;
        }
    }
    return false;
}

// Cria automaticamente um determinado numero de exemplares
void Livro::criarExemplares(int numero)
{
    for (int i = 0; i < numero; i++)
    {
        int nroExemplar = (int)exemplares.size() + 1;
        ExemplarLivro novoExemplar(nroExemplar);
        exemplares.push_back(novoExemplar);
        quantidadeDeExemplares++;
    }
}

// Retorna um ponteiro para o primeiro exemplar disponivel
ExemplarLivro Livro::getExemplaresDisponivel()
{
    for (int i = 0; i < (int)exemplares.size(); i++)
    {
        if (exemplares[i].getStatus() == StatusEmprestimo::DISPONIVEL)
        {
            return &exemplares[i];
        }
    }
    return nullptr;
}

void Livro::imprimirDadosLivro() const
{
    cout << "Codigo: " << codigo << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Edicao: " << edicao << endl;
    cout << "Ano: " << anoPublicacao << endl;
    cout << "Exemplares: " << quantidadeDeExemplares << endl;
}