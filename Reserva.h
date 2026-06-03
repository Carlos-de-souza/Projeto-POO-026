#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
#include <string>

using namespace std;

class Reserva
{
private:
    int id;
    int dataRealizacao;

public:
    Reserva(int id, int dataRealizacao);
    int getId() const;
    int getDataRealizacao() const;
    void setId(const int id);
    void setDataRealizacao(const int dataRealizacao);
    void exibirReserva() const;
};

#endif // RESERVA_H