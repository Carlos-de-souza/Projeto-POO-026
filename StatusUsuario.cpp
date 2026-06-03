#include "StatusUsuario.h"

std::string statusToString(StatusUsuario s) {

    switch (s)
    {
    case StatusUsuario::HABILITADO: return "Habilitado";
    case StatusUsuario::EM_DEBITO: return "Em Debito";

    default: return "Invalido";
    }
}