#ifndef STATUSUSUARIO_H
#define STATUSUSUARIO_H

#include <string>

enum class StatusUsuario {

    HABILITADO,
    EM_DEBITO,
};

std::string statusToString(StatusUsuario s);

#endif