#ifndef DATAPARTIDAMULTIJUGADOR_H
#define DATAPARTIDAMULTIJUGADOR_H

#include <iostream>
#include <set>

#include <DataPartida.h>

using namespace std;

class DataPartidaMultijugador: public DataPartida{
    private:
        set<*string> Nicknames;
        bool TransmitidaEnVivo;
    public:
        DataPartidaMultijugador();

        ~DataPartidaMultijugador();
};
#endif