#include "Reserva.h"

Reserva::Reserva(int id, int dataRealizacao)
{
    this->id = id;
    this->dataRealizacao = dataRealizacao;
}

int Reserva::getId() const
{
    return id;
}

int Reserva::getDataRealizacao() const
{
    return dataRealizacao;
}

void Reserva::setId(const int id)
{
    this->id = id;
}

void Reserva::setDataRealizacao(const int dataRealizacao)
{
    this->dataRealizacao = dataRealizacao;
}

void Reserva::exibirReserva() const
{
    cout << "ID: " << id << endl;
    cout << "Data de Realizacao: " << dataRealizacao << endl;
}
