#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
#include "StatusUsuario.h"

using std::string;

class Usuario
{
protected: // Deixamos como protected para Aluno e Professor usarem os atributos diretamente
    int codigo;
    string nome;
    StatusUsuario status;

public:
    Usuario(int cod, string n, StatusUsuario stat);
    
    // Destrutor virtual obrigatório para evitar memory leak
    virtual ~Usuario() = default;

    // Getters e Setters
    int getCodigo() const;
    string getNome() const;
    StatusUsuario getStatus() const;
    void setCodigo(const int cod);
    void setNome(const string n);
    void setStatus(const StatusUsuario stat);

    // MÉTODO POLIMÓRFICO: Torna a classe abstrata
    virtual void apresentar() const = 0;

    // SOBRECARGA DE OPERADOR: Comparação (Se o usuario x é == ao y ...)
    bool operator==(const Usuario& outro) const;
};

#endif