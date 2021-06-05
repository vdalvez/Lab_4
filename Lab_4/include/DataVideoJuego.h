#ifndef DATAVIDEOJUEGO_H
#define DATAVIDEOJUEGO_H

#include <iostream>
#include <set>

#include "DataCosto.h"
#include "DataSuscripcion.h"
#include "DataCategoria.h"

using namespace std;

class DataVideoJuego{
    private:
        string NombreVideoJuego;
        string Descripcion;
        string NombreEmpresa;
        float Promedio;
        float TotalHorasJugadas;

        DataCosto Costo;
        DataSuscripcion SuscripcionT;
        set<DataCategoria*> CategoriasJuego;
    public:
        DataVideoJuego();

        ~DataVideoJuego();
};

#endif