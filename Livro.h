#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <string>
#include <vector>
#include "Autor.h"
#include "ExemplarLivro.h"

using std::string;

class Livro
{
private:
    int codigo;
    string titulo;
    int edicao;
    float preco;
    int anoPublicacao;
    int quantidadeDeExemplares;
    int nroDiasPermitidoEmprestimo;
    std::vector<Autor> autores;
    int statusAgora;
    int statusFuturo;
    int nroPaginas;
    std::vector<ExemplarLivro> exemplares;

public:
    Livro(int cod, string t, int ed, float p, int anPubli, int quantEx, int nroDPEm, std::vector<Autor> &aut, int nroPag);

    // Getters
    int getCodigo() const;
    string getTitulo() const;
    int getEdicao() const;
    float getPreco() const;
    int getAnoPublicacao() const;
    int getQuantidadeDeExemplares() const;
    int getNroDiasPermitidoEmprestimo() const;
    std::vector<Autor> getAutores() const;
    int getNroPaginas() const;

    // Setters
    void setCodigo(int cod);
    void setTitulo(string t);
    void setEdicao(int ed);
    void setPreco(float p);
    void setAnoPublicacao(int anPubli);
    void setQuantidadeDeExemplares(int quantEx);
    void setNroDiasPermitidoEmprestimo(int nroDPEm);
    void setAutores(const std::vector<Autor> &autores);
    void setNroPaginas(int nroPag);

    // Metodos do diagrama
    bool estaDisponivel() const;
    void criarExemplares(int numero);
    ExemplarLivro getExemplaresDisponivel();
    void imprimirDadosLivro() const;
};

#endif