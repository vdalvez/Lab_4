#ifndef DATAPARTIDA_H
#define DATAPARTIDA_H

#include <iostream>

#include "DataFechaHora.h"

using namespace std;

class DataPartida{
    private:
        DataFechaHora HoraInicio;
        float Duracion;
        int Id_Propio;
        string NombreVideoJuego;
        bool EnProceso;
    public:
        DataPartida();

        ~DataPartida();
};

#endif