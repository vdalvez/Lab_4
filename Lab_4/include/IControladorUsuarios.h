#ifndef ICONTROLADORUSUARIOS_H
#define ICONTROLADORUSUARIOS_H
//includes respectivos

#include <iostream> 
#include <set>
#include <map>

#include "DataSuscripcion.h"
#include "DataUsuario.h"
#include "DataPartida.h"
#include "DataPartidaIndividual.h"
#include "DataEstadistica.h"
#include "DataVideoJuego.h"
#include "DataGenero.h"

#include "Categoria.h"
#include "Usuario.h"
#include "Estadistica.h"
#include "Partida.h" //Ver si es necesario


using namespace std;


class IControladorUsuarios{
	private:
		//atributos

		//colecciones


	public:
		//creador
		///IControladorUsuarios();

		//gets y set si corresponde


		//otros operaciones
            //CU AltaUsuario
        virtual void AltaUsuario(DataUsuario*) = 0;
        virtual void ConfirmaAltaUsuario() = 0;
        
            //CU PublicarVideoJuego
        virtual Categoria* ObtenerCategoria(string) = 0; //Ver si es necesaria
        virtual set<DataGenero*> getCategoriasSistema() = 0;
         //set<DataGenero> getCatGenero() = 0;
         //set<DataPlataforma> getCatPlataforma() = 0;
         //set<DataOtra> getCatOtra() = 0;


            //CU SuscribirseAVideoJuego
        virtual set<DataVideoJuego*> ListaVideoJuego_Suscripcion_Activos() = 0;
        virtual set<DataVideoJuego*> ListaVideoJuego_Suscripcion_No_Activos() = 0;
        virtual void IngresarNombreVideoJuego(string) = 0;
        virtual void CancelarActualSuscripcion() = 0;
        virtual void IngresarDatosSuscripcion(DataSuscripcion*) = 0;
        virtual void Suscribirse() = 0;

            //CU IniciarPartida
        virtual set<DataPartidaIndividual*> ListarHistorialPartidas(string) = 0;
        virtual void ContinuarPartidaIndividual(int) = 0;
        virtual set<string> ObtenerJugadoresActivos(string) = 0;
        virtual void IngresarJugador(string) = 0;
        virtual void InciarPartida(DataPartida*) = 0;

            //FinalizarPartida
        virtual set<DataPartida*> ListarPartidasSinFinalizar() = 0; 
        virtual void FinalizarPartida(int) = 0;

            //EliminarVideoJuego
        virtual void DesvincularVideoJuegoDesarrollador(string) = 0;

            //ConsultarEstadistica
        virtual set<string> ListarVideoJuegoDesarrollador() = 0;
        virtual set<DataEstadistica*> CalcularEstadistica(string) = 0;


		//destructor
		virtual ~IControladorUsuarios();
};
#endif