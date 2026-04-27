#include "StatusEmprestimo.h"

std::string toString(StatusEmprestimo status)
{
    switch (status)
    {
    case StatusEmprestimo::DISPONIVEL:
        return "DISPONÍVEL";
    case StatusEmprestimo::EMPRESTADO:
        return "EMPRESTADO";
        break;

    default:
        return "ERRO";
        break;
    }
}
