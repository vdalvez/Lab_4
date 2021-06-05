#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H

#include "DataPartidaMultijugador.h"
#include "Partida.h"
#include "Jugador.h"
#include <map>

class PartidaMultijugador: public Partida{
    private:
        //atributos
        bool transmitidaEnVivo;
        int cant_Jugadores;

        //coleccion de jugadores
        map<int, Jugador*> Jugadores;
        
    public:
        //creador y destructor
        //PartidaMultijugador();
        //~PartidaMultijugador();

        //getters y setters
        bool get_transmitidaEnVivo();
        int get_cantJugadores();

        //Operaciones virtual
        virtual DataPartida getDataPartida(); 

        //Operaciones
        void añadirJugador(Jugador);
        void setearInfoJugador();       
};
#endif