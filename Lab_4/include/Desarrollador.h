#ifndef DESARROLLADOR_H
#define DESARROLLADOR_H
//includes respectivos
#include "Usuario.h"
#include "Estadistica.h"
#include "Categoria.h"

#include "DataEstadistica.h"

#include <set>

class Desarrollador: public Usuario{
	private:
		//atributos
        string Empresa;

		//colecciones
        //coleccion de videojuegos
        map<string, VideoJuego*> ColVideoJuego;
        //coleccion de Estadisticas
        set<Estadistica*> ColEstadistica;
        //coleccion de Categorias
        set<Categoria*> ColCategoria;

	public:
		//creador
		///Desarrollador();

		//gets y set si corresponde


		//otros operaciones
        void añadirVaD(VideoJuego);
        //post: añade el videojuego a la coleccion del desarrollador que creo
        set<string> listarVJuegoD();
        //post: lista el nombre de los videojuegos con 

        set<DataEstadistica*> calcularEstadisticas(VideoJuego); 
        
        void desvincularV_D(string);
        //post: remueve de la coleccion de videojuegos que crea el desarrollador elque es pasado por parametro


		//destructor
		///~Desarrollador();
};
#endif