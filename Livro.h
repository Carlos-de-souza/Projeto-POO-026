#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <string>
#include "Editora.h"
#include "ExemplarLivro.h"
#include "Autor.h"

using namespace std;

class Livro
{
private:
    int codigo;
    string titulo;
    int edicao;
    float preco;
    Editora editora;
    int anoPublicacao;
    int quantidadeDeExemplares;
    int nroDiasPermitidoEmprestimo;
    vector<Autor> autores;
    int statusAgora;
    int statusFuturo;
    int nroPaginas;

public:
    Livro(int cod, string tit, int edi, float pre, Editora &edit, int anoPubli, int quantDeExem, int nroDiasPermEmp);
    int getCodigo();
    string getTitulo();
    int getEdicao();
    float getPreco();
    Editora getEditora();
    int getAnoPublicacao();
    int getQuantidadeDeExemplares();
    int getNroDiasPermitidoEmprestimo();
    vector<Autor> getAutor();
    int getStatusAgora();
    int getStatusFuturo();
    int getNroPaginas();

    void setCodigo(const int codigo);
    void setTitulo(const string titulo);
    void setEdicao(const int edicao);
    void setPreco(const float preco);
    void setEditora(const Editora &edit);
    int getAnoPublicacao(const int anoPublicacao);
    int getQuantidadeDeExemplares(const int quantidadeDeExemplares);
    int getNroDiasPermitidoEmprestimo(const);
    vector<Autor> getAutor(const vector<Autor> &autores);
    void getStatusAgora(const int statusAgora);
    void getStatusFuturo(const int statusFuturo);
    void getNroPaginas(const int nroPaginas);

    bool estaDisponivel() const;
    void criarExemplares(int numero);
    ExemplarLivro getExemplarDisponivel() const;
    void apresentarLivro() const;
};

#endif