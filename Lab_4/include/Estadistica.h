#ifndef ESTADISTICA_H
#define ESTADISTICA_H
//includes respectivos
#include "VideoJuego.h"
#include <iostream>

using namespace std;

class Estadistica{
	private:
		//atributos
        string Nombre;
        string Descripcion;

		//colecciones


	public:
		//creador
		///Estadistica();

		//gets y set si corresponde


		//otros operaciones
        virtual float consultarEstadistica(VideoJuego) = 0;


		//destructor
		///~Estadistica();
};

#endif