#include "StatusEmprestimo.h"

std::string statusEmprestimoToString(StatusEmprestimo s) {

    switch (s)
    {
    case StatusEmprestimo::DISPONIVEL: return "Disponivel";
    case StatusEmprestimo::EMPRESTADO: return "Emprestado";

    default: return "Invalido";
    }
}