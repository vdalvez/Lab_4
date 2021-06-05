#ifndef ICONTROLADORPARTIDAS_h
#define ICONTROLADORPARTIDAS_h
//includes respectivos

#include <iostream>

#include "Partida.h"

#include "DataFechaHora.h"

using namespace std;

class IControladorPartidas{
	private:
		//atributos

        //colecciones

	public:
            //CU iniciarPartida
        virtual Partida* CrearPartidaJugador(DataPartida) = 0;

            //CU FinalizarPartida
        virtual void Finalizar_Partida(int) = 0;

            //CU EliminarVideoJuego
        virtual void eliminarPartidas(string) = 0;


		//destructor
		virtual ~IControladorPartidas();
};

#endif