#ifndef ICONTROLADORVIDEOJUEGOS_H
#define ICONTROLADORVIDEOJUEGOS_H

#include <iostream> 
#include <set> 


#include "DataVideoJuego.h"
#include "DataCategoria.h"
#include "DataGenero.h"
#include "DataSuscripcion.h"

#include "Categoria.h"
#include "VideoJuego.h"

using namespace std;

class IControladorVideoJuegos{
    private:
            //Atributos Propios

            //colecciones

    public:
            //PublicarVideoJuego    
        virtual void IngresarDatosVideoJuego(DataVideoJuego) = 0;
        virtual Categoria* ObtenerCategoria(string) = 0; //Ver si es necesaria
        virtual set<DataGenero*> getCategoriasSistema() = 0;
            //set<DataGenero> getCatGenero() = 0;
            //set<DataPlataforma> getCatPlataforma() = 0;
            //set<DataOtra> getCatOtra() = 0;
        virtual void AgregarCategoria(DataCategoria) = 0;
        virtual DataVideoJuego* getDataVideoJuegos() = 0;
        virtual void PublicarVideoJuego() = 0;

            //SuscribirseAVideoJuego
        virtual set<DataVideoJuego*> ObtenerListaJuegosSuscripcionActiva(string) = 0;
        virtual set<DataVideoJuego*> ObtenerListaJuegosSuscripcionNoActiva(string) = 0;
        virtual void IngresarDatosVideoJuego(DataVideoJuego) = 0;
        virtual void CancelarActualSuscripcionVideoJuego(string,string) = 0;
        virtual void Suscribirse(string,Usuario,DataSuscripcion,bool) = 0;

            //IniciarPartida
        virtual set<string> ObtenerJugadoresActivos(string) = 0;
        virtual void IncluirPartidaAVideoJuego(Partida,string) = 0;

            //EliminarVideoJuego
        virtual set<string> ListarVideoJuegos_Partidas_SinFinalizar() = 0;
        virtual void ConfirmarEliminarVideoJuego(string) = 0;

            //ConsultarEstadistica
        virtual VideoJuego* getVideoJuego(string) = 0;

        virtual ~IControladorVideoJuegos();
};

#endif