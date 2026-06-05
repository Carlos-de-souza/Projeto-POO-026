#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Usuario.h"

class Professor : public Usuario
{
public:
    Professor(int cod, string n, StatusUsuario stat);
    virtual ~Professor() = default;

    // Sobrescreve o método polimórfico
    void apresentar() const override;
};

#endif