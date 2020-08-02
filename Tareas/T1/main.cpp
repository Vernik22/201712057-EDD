//Librerias
//input ouput stream
#include <iostream>
#include "Lista.h"
#include "NodoEstudiante.h"

using namespace std;
int main() {
	int numeroM = 0;
	Lista* lista = new Lista();
	NodoEstudiante* p;
	/*
	cout << "Hola Mundo" << endl;

	cin >> numerop;
	cout << endl << numerop;*/


	//----haciendo el menu 

	while (numeroM != 4)
	{
		//NodoEstudiante* p = new NodoEstudiante(201712057, "Vernik");
	/*	lista->agregar(p);*/
		
		lista->imprimir();
		int carne;
		string nombre;
		cout << "Tarea 1 carne 201712057"<<endl;
		cout << "**Menu del Programa seleccione una opcion**"<<endl;
		cout << "*Agregar Estudiante:   #1" << endl;
		cout << "*Buscar Estudiante:    #2" << endl;
		cout << "*Eliminar Estudiante:  #3" << endl;
		cout << "*Cerrar Programa:      #4" << endl;
		cin >> numeroM;
		switch (numeroM)
		{
		case 1:

			cout << endl<<"**Agreagar Estudiante:  Ingrese Carne y Nombre"<<endl;
			cout << "Carne: ";
			cin >> carne ;
			cout << "Nombre: ";
			cin >> nombre;
			 p = new NodoEstudiante(carne, nombre);
			lista->agregar(p);
			break;
		case 2:
			cout << "**Buscar Estudiante: Ingrese Carne"<<endl;
			cout << "Carne: ";
			cin >> carne;
			p= lista->buscar(carne);
			cout << "*Estudiante Encontrado: " << endl;
			cout << "Carne: " << p->getCarne() << " Nombre: " << p->getNombre()<<endl;
			break;
		case 3:
			cout << "**Eliminar Estudiante: Ingrese Carne"<<endl;
			cout << "Carne: ";
			cin >> carne;
			lista->eliminar(carne);
			cout << "Estudiante Eliminado"<<endl;
			break;
		default:
			break;
		}
	}
	

	return 0;
}