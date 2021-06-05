#ifndef CONTROLADORPARTIDAS_h
#define CONTROLADORPARTIDAS_h
//includes respectivos

#include "IControladorPartidas.h"

class ControladorPartidas: public IControladorPartidas{
	private:
		//atributos
        string nombreVideoJuego;
        DataFechaHora Fecha;
        string IdentificadorPartida;

        static ControladorPartidas *Instance;
        ControladorPartidas();

        //colecciones

	public:
		
        static ControladorPartidas* getInstance();

            //CU iniciarPartida
        Partida* CrearPartidaJugador(DataPartida);

            //CU FinalizarPartida
        void Finalizar_Partida(int);

            //CU EliminarVideoJuego
        void eliminarPartidas(string);


		//destructor
		~ControladorPartidas();
};

#endif