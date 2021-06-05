#include "Fabrica.h"

IControladorUsuarios* Fabrica::getControladorUsuarios() {
             return ControladorUsuarios::getInstance();
}

IControladorVideoJuegos* Fabrica::getControladorVideoJuegos() {
             return ControladorVideoJuegos::getInstance();
}

IControladorPartidas* Fabrica::getControladorPartidas() {
             return ControladorPartidas::getInstance();
}