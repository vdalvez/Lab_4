#ifndef FABRICA_H
#define FABRICA_H
//includes respectivos

#include "IControladorUsuarios.h"
#include "IControladorVideoJuegos.h"
#include "IControladorPartidas.h"

#include "ControladorUsuarios.h"
#include "ControladorVideoJuegos.h"
#include "ControladorPartidas.h"


class Fabrica{
	private:

	public:
		//creador
		///Fabrica();

		IControladorUsuarios* getControladorUsuarios();
		IControladorVideoJuegos* getControladorVideoJuegos();
    	IControladorPartidas* getControladorPartidas();

		//destructor
		///~Fabrica();
};

#endif