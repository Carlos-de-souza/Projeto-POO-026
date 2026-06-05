#ifndef ALUNO_H
#define ALUNO_H

#include "Usuario.h"

class Aluno : public Usuario
{
private:
    int RA;

public:
    Aluno(int cod, string n, StatusUsuario stat, int ra);
    virtual ~Aluno() = default;

    int getRA() const;
    void setRA(int ra);

    // Sobrescreve o método polimórfico
    void apresentar() const override;
};

#endif