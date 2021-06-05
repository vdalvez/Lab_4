#ifndef DATACOSTO_H
#define DATACOSTO_H

class DataCosto {
	private:
		//atributos
		float Mensual, Trimestral, Anual, Vitalicia;

		//colecciones


	public:
		//creador
        DataCosto(); //Constructor por defecto
        DataCosto(float, float, float, float);
        DataCosto(const DataCosto&); //Constructor por copia

		//gets
        float get_Mensual();
        float get_Trimestral();
        float get_Anual();
        float get_Vitalicia();

		//destructor
		~DataCosto();
};

#endif