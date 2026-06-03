#include "Acervo.h"

using std::cout;
using std::endl;

Acervo::Acervo() {}

// Getters
vector<Livro> Acervo::getAcervo() const
{
    return acervo;
}

// Metodos do diagrama
void Acervo::adicionarLivro(Livro livro)
{
    acervo.push_back(livro);
    cout << "Livro '" << livro.getTitulo() << "' adicionado ao acervo." << endl;
}

void Acervo::removerLivro(int codigo)
{
    for (int i = 0; i < acervo.size(); i++)
    {
        if (acervo[i].getCodigo() == codigo)
        {
            cout << "Livro '" << acervo[i].getTitulo() << "' removido do acervo." << endl;
            acervo.erase(acervo.begin() + i);
            return;
        }
    }
    cout << "Livro com codigo " << codigo << " nao encontrado." << endl;
}

void Acervo::listarLivros() const
{
    cout << endl;
    cout << "=== LIVROS NO ACERVO ===" << endl;
    if (acervo.empty())
    {
        cout << "Nenhum livro cadastrado." << endl;
    }
    else
    {
        for (int i = 0; i < acervo.size(); i++)
        {
            acervo[i].imprimirDadosLivro();
        }
    }
    cout << "========================" << endl;
}