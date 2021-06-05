#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <iostream>

#include "DataCategoria.h"

using namespace std;

class Categoria{
	private:
		string Nombre;
        string Descripcion;


	public:
        //constructor
        Categoria(string, string);
       
        //getter polimorfico
        virtual DataCategoria getDateCategoria() = 0; 
        string getNombre();
        string getDescripcion();
        
        //destructor 
		~Categoria();

};
#endif