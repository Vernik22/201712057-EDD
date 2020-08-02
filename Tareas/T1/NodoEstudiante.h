#pragma once
#ifndef NodoEstudiante_H
#define NodoEstudiante_H
#include <iostream>
#include <string.h>
//la siguiente libreria nos aporta la constante Null para punteros
#include <stddef.h>

using namespace std;

class NodoEstudiante
{
public:
	NodoEstudiante(int carne, string nombre);
	~NodoEstudiante();
	string getNombre();
	int getCarne();
	NodoEstudiante* getSiguiente();

	void setSiguiente(NodoEstudiante* siguiente);
	void imprimir();

private:
	int carne;
	string nombre;
	NodoEstudiante* siguiente;
};

#endif // !NodoEstudiante_H

