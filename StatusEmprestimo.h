#ifndef STATUSEMPRESTIMO_H
#define STATUSEMPRESTIMO_H

#include <string>

enum class StatusEmprestimo {

    DISPONIVEL,
    EMPRESTADO,
};

std::string statusEmprestimoToString(StatusEmprestimo s);

#endif