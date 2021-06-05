#ifndef SUSCRIPCION_H
#define SUSCRIPCION_H

#include "DataFechaHora.h"
#include "TipoPago.h"
#include "Jugador.h"

#include <iostream>

using namespace std;

class Suscripcion{
    private:
        //atributos
        float Costo;
        DataFechaHora Fecha;
        TipoPago MetodoPago;
        bool Activa;

        //Jugador con suscripcion
        Jugador* Jugador;

    public:
        //creadores y destructores
        //Suscripcion();
        //~Suscripcion();

        //Getters y setters
        float get_Costo();
        bool get_Activa();

        //Operaciones
        string EmailSuscripcion();
        void borrarDatosSusc(string);
};
#endif