#ifndef JUGADOR_H
#define JUGADOR_H
//includes respectivos
#include "Usuario.h"
#include "InfoJugador.h"
#include "Partida.h"
#include "PartidaMultijugador.h"

#include <set>
#include <map>
#include <queue>


class Jugador: public Usuario{
	private:
		//atributos
        string Nickname;
        string Descripcion;
		//colecciones
        //coleccion de seguidos
        map<int, InfoJugador*> ColInfoJugador;
        //coleccion de partidas que inicia
        deque<Partida*> ColPartidaInicia;
        //coleccion de partidas que participa
        map<int, PartidaMultijugador*> ColPartidaParticipa;

	public:
		//creador
		///Jugador();

		//gets y set si corresponde


		//otros operaciones
        void añadirPartidaAJugadorIni(Partida*);
        void añadirPartidaAJugadorPar(Partida*);
        set<DataPartida*> listarPartidasSinFinalizar();
        void actualizarInfoJugadores(DataFechaHora*, int);
        set<string> listarVideoJuegoConPartidasFinalizadas();
        void borrarDatos(string);


		//destructor
		///~Jugador();
};
#endif