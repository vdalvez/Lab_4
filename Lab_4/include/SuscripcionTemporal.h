#ifndef SUSCRIPCIONTEMPORAL_H
#define SUSCRIPCIONTEMPORAL_H

#include "Suscripcion.h"
#include "TipoContrato.h"

class SuscripcionTemporal: public Suscripcion{
    private:
        //atributos
        TipoContrato Validez;
        bool Cancelada;

        //?

    public: 
        //creador y destructor
        SuscripcionTemporal();
        

        //getters y setters
        TipoContrato get_Validez();
        bool get_cancelada();

        ~SuscripcionTemporal();
};
#endif