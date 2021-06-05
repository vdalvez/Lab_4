#ifndef CONTROLADORVIDEOJUEGOS_H
#define CONTROLADORVIDEOJUEGOS_H

#include "IControladorVideoJuegos.h"

using namespace std;

class ControladorVideoJuegos: public IControladorVideoJuegos{
    private:
            //Atributos Propios
        DataVideoJuego VideoJuegoSeleccionado;
        string NickName;

        static ControladorVideoJuegos *Instance;
        ControladorVideoJuegos();

        map<string,VideoJuego*> ColeccionVideoJuegos; //Coleccion VideoJuegos

    public:

        static ControladorVideoJuegos* getInstance();

            //PublicarVideoJuego    
        void IngresarDatosVideoJuego(DataVideoJuego);
        Categoria* ObtenerCategoria(string); //Ver si es necesaria
        set<DataGenero*> getCategoriasSistema();
            //set<DataGenero> getCatGenero();
            //set<DataPlataforma> getCatPlataforma();
            //set<DataOtra> getCatOtra();
        void AgregarCategoria(DataCategoria);
        DataVideoJuego* getDataVideoJuegos();
        void PublicarVideoJuego();

            //SuscribirseAVideoJuego
        set<DataVideoJuego*> ObtenerListaJuegosSuscripcionActiva(string);
        set<DataVideoJuego*> ObtenerListaJuegosSuscripcionNoActiva(string);
        void IngresarDatosVideoJuego(DataVideoJuego);
        void CancelarActualSuscripcionVideoJuego(string,string);
        void Suscribirse(string,Usuario,DataSuscripcion,bool);

            //IniciarPartida
        set<string> ObtenerJugadoresActivos(string);
        void IncluirPartidaAVideoJuego(Partida,string);

            //EliminarVideoJuego
        set<string> ListarVideoJuegos_Partidas_SinFinalizar();
        void ConfirmarEliminarVideoJuego(string);

            //ConsultarEstadistica
        VideoJuego* getVideoJuego(string);

        ~ControladorVideoJuegos();
};

#endif