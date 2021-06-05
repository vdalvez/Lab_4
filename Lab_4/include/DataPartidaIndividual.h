#ifndef DATAPARTIDAINDIVIDUAL_H
#define DATAPARTIDAINDIVIDUAL_H

#include <iostream>

#include <DataPartida.h>

using namespace std;

class DataPartidaIndividual: public DataPartida{
    private:
        int Id_PartidaAnterior;
        bool ContinuarPartida;
    public:
        DataPartidaIndividual();

        ~DataPartidaIndividual();
};
#endif