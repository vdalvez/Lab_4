#ifndef PARTIDAINDIVIDUAL_H
#define PARTIDAINDIVIDUAL_H

#include "Partida.h"
#include "Jugador.h"

class PartidaIndividual: public Partida{
    private:    
        //atributos
        bool ContinuacionPartidaAnterior;
        int IdPAnterior;
        PartidaIndividual* ContPartida;

    public:
        //creador y destructor
        PartidaIndividual();
        

        //getters y setters
        int get_idPAnterior();

        void set_PartidaIndividual(PartidaIndividual*);
        
        //Operaciones virtual
        virtual DataPartida getDataPartida();
        //Operaciones

        ~PartidaIndividual();
        
};
#endif