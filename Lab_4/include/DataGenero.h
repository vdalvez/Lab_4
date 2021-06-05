#ifndef DATAGENERO_H
#define DATAGENERO_H

#include <iostream>

#include "DataCategoria.h"

using namespace std;

class DataGenero: public DataCategoria{
    private:
        string Nombre;
        string Descripcion;
    public:
        DataGenero();

        ~DataGenero();
};
#endif