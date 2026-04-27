#include "Reserva.h"

using std::cout;
using std::endl;

Reserva::Reserva(int id, int dReal) : ID(id), dataRealizacao(dReal)
{
}

int Reserva::getID()
{
    return ID;
}

int Reserva::getDataReal()
{
    return dataRealizacao;
}

void Reserva::setID(const int ID)
{
    this->ID = ID;
}

void Reserva::setDataReal(const int dataRealizacao)
{
    this->dataRealizacao = dataRealizacao;
}

void Reserva::dadosReserva() const
{
    cout << "ID: " << this->ID << endl;
    cout << "Data de Realização: " << this->dataRealizacao << endl;
}
