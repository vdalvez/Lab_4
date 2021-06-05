//includes _H

//#include "DataUsuario.h"
//#include "DataDesarrollador.h"
//#include "DataJugador.h"

//include librerias C++

#include <iostream>

using namespace std;



int main(){
	//variables auxiliares

	// variables de eleccion	
	int opcion, opcionDoJ;
	//variables de ingreso de datos
	string Email, Contrasenia, Empresa, Nickname, Descripcion;
	//
	//DataUsuario AltaU;

	//interfaces


	cout << "Bienvenido a nuestra plataforma de VideoJuegos" << endl;

	do {
		//couts
		cout << "Elija el servicio que quiera ejecutar" << endl;
		cout << "1-Alta de usuario" << endl;
		cout << "2-Iniciar sesion" << endl;
		cout << "3-Modificar fecha del sistema" << endl;
		cout << "4-Cargar datos de prueba" << endl;
		cout << "5-Salir" << endl;
		cout << endl;
		cout << "Ingrese opcion: ";
		cin >> opcion;
		cout << endl;
		
		try {
			
			switch (opcion) {
				case 1:
					cout << "Selecciono Alta de usuario" <<endl;
					cout << "Por favor ingrese los siguientes datos para quedar registrado en el sistema" <<endl;
					cout << "Email: "; cin >> Email;
					cout << "Contrasenia: "; cin >> Contrasenia;
					//se podria implementar un confirmar contraseña, si sobra tiempo
					do{
						cout << "Desea registrarse en el sistema como:" << endl;
						//se podria dar una descripcion de que hace cada
						cout << "1-Desarrollador" << endl;
						cout << "2-Jugador" << endl;
						cout << "Eleccion: "; cin >> opcionDoJ; cout << endl;
						switch (opcionDoJ) {
							case 1:
								cout << "Siga ingresando los siguientes datos" << endl;
								cout << "Empresa: "; cin >> Empresa;
								break;
							case 2:
								cout << "Siga ingresando los siguientes datos" << endl;
								cout << "Nickname: "; cin >> Nickname;
								do{

								} while();
								//if(!noEstaRegistrado(Nickname))
								//falta ver cuando el nick ya esta en el sistema
								cout << "Descripcion: "; cin >> Descripcion;
								
							
								break;
							default:
								cout << "El numero ingresado no es correcto, intente nuevamente" << endl;
								cout << endl;
								break;
						}
					} while (opcionDoJ != 1 && opcionDoJ != 2);
					break;
				case 2:
					cout << "Selecciono Iniciar sesion" <<endl;
					break;
				case 3:
					cout << "Selecciono Modificar fecha del sistema" <<endl;
					break;
				case 4:
					cout << "Selecciono Cargar datos de prueba" <<endl;
					break;
				case 5:
					break;	
				default: 
					cout << "El numero ingresado no es correcto, intente nuevamente" << endl;
					cout << endl;
					break;
			}//End switch

			
			} catch(invalid_argument& s){
					cout << s.what() << endl;
					cout << endl;
		}//End try
	} while (opcion != 5);

	cout << "Gracias por utilizar nuestros servicios" << endl;

	//destruir memoria dinamica, tipo interfaces, etc

	//interfaces

	return 0;
}