#ifndef DATATEMPORAL_H
#define DATATEMPORAL_H

#include "DataSuscripcion.h"
#include "TipoContrato.h"

class DataTemporal: public DataSuscripcion {
	private:
        TipoContrato Validez;
	public:
        DataTemporal();

		//destructor
		~DataTemporal();
};

#endif