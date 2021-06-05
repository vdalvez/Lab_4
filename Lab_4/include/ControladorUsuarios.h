#ifndef CONTROLADORUSUARIOS_H
#define CONTROLADORUSUARIOS_H

#include "IControladorUsuarios.h"

class ControladorUsuarios: public IControladorUsuarios{
    private:
            //Atributos Propios
        string Email;
        string NombreVideoJuego;
        bool ExisteSuscripcion; // Hay que ver si es Necesario;

        static ControladorUsuarios* Instance;
        ControladorUsuarios();
        

        map<string,Usuario*> ColeccionUsuarios;     //Coleccion de Usuarios
        set<Categoria*> ColeccionCategorias;        //Coleccion de Categorias
                                                    //Coleccion de Estadisticas
    public:
        static ControladorUsuarios* getInstance();

            //CU AltaUsuario
        /*Pre: En caso de que dtUsuario sea instancia de DataJugador, no existe en
        el sistema un objeto Jugador cuyo atributo nickname coincida con el de
        dtUsuario*/
        void AltaUsuario(DataUsuario*);
        /*Post: Se almacenó en la memoria del sistema la instancia dtUsuario de
        tipo DataUsuario ingresada*/
        void ConfirmaAltaUsuario();
        
            //CU PublicarVideoJuego
        Categoria* ObtenerCategoria(string); //Ver si es necesaria
        set<DataGenero*> getCategoriasSistema();
         //set<DataGenero> getCatGenero();
         //set<DataPlataforma> getCatPlataforma();
         //set<DataOtra> getCatOtra();


            //CU SuscribirseAVideoJuego
        set<DataVideoJuego*> ListaVideoJuego_Suscripcion_Activos();
        set<DataVideoJuego*> ListaVideoJuego_Suscripcion_No_Activos();
        void IngresarNombreVideoJuego(string);
        void CancelarActualSuscripcion();
        void IngresarDatosSuscripcion(DataSuscripcion*);
        void Suscribirse();

            //CU IniciarPartida
        set<DataPartidaIndividual*> ListarHistorialPartidas(string);
        void ContinuarPartidaIndividual(int);
        set<string> ObtenerJugadoresActivos(string);
        void IngresarJugador(string);
        void InciarPartida(DataPartida*);

            //FinalizarPartida
        set<DataPartida*> ListarPartidasSinFinalizar(); 
        void FinalizarPartida(int);

            //EliminarVideoJuego
        void DesvincularVideoJuegoDesarrollador(string);

            //ConsultarEstadistica
        set<string> ListarVideoJuegoDesarrollador();
        set<DataEstadistica*> CalcularEstadistica(string);
        
        ~ControladorUsuarios(); // Va o no ?
};

#endif