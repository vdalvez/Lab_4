#include "SuscripcionTemporal.h"

TipoContrato SuscripcionTemporal::get_Validez(){
    return Validez;
}

bool SuscripcionTemporal::get_cancelada(){
    return Cancelada;
}