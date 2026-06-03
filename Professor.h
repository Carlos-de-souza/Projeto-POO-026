#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Usuario.h"

class Professor : public Usuario
{
private:
    // int codigo;
public:
    Professor(int cod, string n, StatusUsuario &stat);
    ~Professor();
    void apresentarProfessor() const;
};

#endif // PROFESSOR_H