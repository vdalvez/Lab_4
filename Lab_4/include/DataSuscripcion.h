#ifndef DATASUSCRIPCION_H
#define DATASUSCRIPCION_H

#include "TipoPago.h"

class DataSuscripcion {
	private:
		//atributos
		float Costo;
        TipoPago MetodoPago;

		//colecciones


	public:
		//creador
        DataSuscripcion(); //Constructor por defecto
        DataCosto(float, float, float, float);
        DataCosto(const DataCosto&); //Constructor por copia

		//gets
        float get_Mensual();
        float get_Trimestral();
        float get_Anual();
        float get_Vitalicia();

		//destructor
		~DataSuscripcion();
};

#endif