#include "GerenciadorDeEmprestimo.h"

GerenciadorDeEmprestimo::GerenciadorDeEmprestimo() {}

// Getters
std::vector<Emprestimo> GerenciadorDeEmprestimo::getEmprestimos() const
{
    return emprestimos;
}

// Metodos do diagrama
void GerenciadorDeEmprestimo::criarEmprestimo(Usuario *usuario, ExemplarLivro *exemplar)
{
    // Verifica se o exemplar esta disponivel
    if (exemplar->getStatus() == StatusEmprestimo::EMPRESTADO)
    {
        std::cout << "ERRO: Exemplar #" << exemplar->getNroDoExemplar() << " ja esta emprestado." << std::endl;
        return;
    }

    // Cria o emprestimo com codigo baseado no tamanho do vetor
    int codigo = (int)emprestimos.size() + 1;
    Emprestimo novoEmprestimo(codigo, usuario);
    novoEmprestimo.adicionarItem(exemplar);
    emprestimos.push_back(novoEmprestimo);

    std::cout << "Emprestimo #" << codigo << " criado para '" << usuario->getNome() << "'." << std::endl;
}

void GerenciadorDeEmprestimo::listarTodosEmprestimosAtuais() const
{
    std::cout << std::endl;
    std::cout << "=== EMPRESTIMOS ATUAIS ===" << std::endl;
    if (emprestimos.empty())
    {
        std::cout << "Nenhum emprestimo registrado." << std::endl;
    }
    else
    {
        for (int i = 0; i < (int)emprestimos.size(); i++)
        {
            emprestimos[i].mostrarDetalhes();
        }
    }
    std::cout << "==========================" << std::endl;
}