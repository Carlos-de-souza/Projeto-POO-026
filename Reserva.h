#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
#include <string>

class Reserva
{
private:
    int ID;
    int dataRealizacao;

public:
    Reserva(int id, int dReal);
    int getID();
    int getDataReal();

    void setID(const int ID);
    void setDataReal(const int dataRealizacao);
    void dadosReserva() const;
};

#endif