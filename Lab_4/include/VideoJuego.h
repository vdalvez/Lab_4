#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

//includes respectivos
#include "Suscripcion.h"
#include "Usuario.h"
#include "Partida.h"
#include "Asiganar_Puntaje.h"
#include "DataSuscripcion.h"
#include "DataCosto.h"
#include "DataVideoJuego.h"


#include <iostream>
using namespace std;

#include <set>

class VideoJuego{
	private:
		//atributos
		string Nombre, Descripcion;
		DataCosto PreciosSusc;

		//colecciones
		set<Suscripcion*> Suscripciones;
		set<Asignar_Puntaje*> Puntajes;
		set<Partida*> Partidas;
	public:
		//creador
		VideoJuego(DataVideoJuego*);

		//Devuelve el DataVideoJuego del objeto VideoJuego
		DataVideoJuego getDataVideoJuego();
		//Setea una Suscripcion creada por Usuario(Jugador), la cual tiene el parámetro Activa == TRUE, con los valores del DataSuscripcion
		void setSuscripcionActiva(DataSuscripcion, Usuario, bool);

		//Devuelve TRUE o FALSE, dependiendo si el Usuario(Jugador) con emailSeleccionado, tiene una Suscripción con Activa == TRUE o Activa == FALSE
		bool juegoSuscActiva(string);
		
		//Destruye el link entre VideoJuego y Suscripcion creada por el Usuario (Jugador) con emailSeleccionado
		void cancelarSuscripcion(string);

		//Crea un link entre VideoJuego y Partida
		void aniadirPartida(Partida);

		//Devuelve TRUE si todas las Partidas asociadas a ese VideoJuego, están finalizadas, FALSE en caso contrario
		bool todasPartidasFinalizadas();

		int cantidadSuscripciones();
		float cantidadHorasJugadas();

		void removerLinksCategorias();
		void removerLinksAsignar_Puntaje();
		void removerLinksSuscripciones();
		void removerLinksPartidas();
		
		//destructor
		~VideoJuego();
};

#endif