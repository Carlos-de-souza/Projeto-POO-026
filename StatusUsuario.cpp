#include "StatusUsuario.h"

std::string toString(StatusUsuario status)
{
    switch (status)
    {
    case StatusUsuario::HABILITADO:
        return "HABILITADO";
    case StatusUsuario::EM_DEBITO:
        return "EM DÉBITO";
        break;

    default:
        return "ERRO";
        break;
    }
}
