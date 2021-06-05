#ifndef INFOJUGADOR_H
#define INFOJUGADOR_H
//includes respectivos
#include "DataFechaHora.h"


class InfoJugador{
	private:
		//atributos
        int IdPartida;
        bool Abandono;
        DataFechaHora DateIngreso;
        DataFechaHora DateSalida;

		//colecciones
        //coleccion de comentario


	public:
		//creador
		InfoJugador();

		//gets y set si corresponde


		//otros operaciones


		//destructor
		~InfoJugador();
};
#endif