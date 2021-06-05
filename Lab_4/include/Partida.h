#ifndef PARTIDA_H
#define PARTIDA_H

#include "DataFechaHora.h"
#include "Jugador.h"
#include "DataPartida.h"
#include <set>

#include <iostream>

using namespace std;

class Partida {
private:
    //atributos
    DataFechaHora dateInicio;
    DataFechaHora dateSalida;
    float duracion;
    string nombre_videojuego;
    int IdPropio;
    bool enProceso;
    set<string*> Nicknames();

    //colecciones 

public:
    //creador
    //Partida(/* args */);

    //getters y setters
    DataFechaHora get_dateInicio();
    DataFechaHora get_dateSalida();
    float get_duracion();
    string get_nombreVideoJuego();
    int get_IdPropio();
    bool get_enProceso();
    string get_Nicknames();

    void set_duracion(int);
    void set_nombreVideoJuego(string);
    void set_IdPropio(int);
    void set_enProceso(bool);
    void set_Nicknames(string);

    //OPERACIONES
    virtual DataPartida getDataPartida() = 0; 

    //destructor
    //~Partida();
};
#endif