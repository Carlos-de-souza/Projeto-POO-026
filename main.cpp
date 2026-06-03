#include <iostream>
#include "Autor.h"
#include "Editora.h"
#include "Livro.h"
#include "ExemplarLivro.h"
#include "Usuario.h"
#include "Acervo.h"
#include "GerenciadorDeEmprestimo.h"

int main()
{
    std::cout << "=== SISTEMA DE BIBLIOTECA ===" << std::endl;

    // --- Cadastro de Autores ---
    Autor autor1(1, "Machado de Assis");
    Autor autor2(2, "Clarice Lispector");

    // --- Cadastro de Editora ---
    Endereco endEditora("Rua das Flores", 100, "Centro", "Sao Paulo", "SP", "01000-000");
    Editora editora1(1, "Editora Abril", &endEditora);

    // --- Cadastro de Livros ---
    std::vector<Autor> autoresLivro1;
    autoresLivro1.push_back(autor1);

    std::vector<Autor> autoresLivro2;
    autoresLivro2.push_back(autor2);

    Livro livro1(1, "Dom Casmurro", 1, 45.90, 1899, 0, 14, autoresLivro1, 256);
    Livro livro2(2, "A Hora da Estrela", 3, 39.90, 1977, 0, 14, autoresLivro2, 88);

    // --- Criar Exemplares ---
    livro1.criarExemplares(3);
    livro2.criarExemplares(2);

    // --- Adicionar ao Acervo ---
    Acervo meuAcervo;
    meuAcervo.adicionarLivro(livro1);
    meuAcervo.adicionarLivro(livro2);
    meuAcervo.listarLivros();

    // --- Cadastro de Usuarios ---
    Usuario usuario1(1, "Rafael Silva", StatusUsuario::HABILITADO);
    Usuario usuario2(2, "Maria Santos", StatusUsuario::HABILITADO);

    // --- Criar Emprestimos ---
    GerenciadorDeEmprestimo gerenciador;

    ExemplarLivro *exDisponivel = livro1.getExemplaresDisponivel();
    if (exDisponivel != nullptr)
    {
        gerenciador.criarEmprestimo(&usuario1, exDisponivel);
    }

    ExemplarLivro *exDisponivel2 = livro2.getExemplaresDisponivel();
    if (exDisponivel2 != nullptr)
    {
        gerenciador.criarEmprestimo(&usuario2, exDisponivel2);
    }

    // --- Listar Emprestimos ---
    gerenciador.listarTodosEmprestimosAtuais();

    std::cout << std::endl
              << "=== FIM ===" << std::endl;

    return 0;
}