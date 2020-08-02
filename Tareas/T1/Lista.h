#pragma once
#ifndef Lista_H
#define Lista_H
#include "NodoEstudiante.h"
#include <iostream>
#include <string.h>

class Lista
{
public:
	Lista();
	~Lista();
	void agregar(NodoEstudiante* nuevo);
	NodoEstudiante* buscar(int carne);
	void eliminar(int carne);
	void imprimir();
	int tamanoLista();

private:
	NodoEstudiante* cabeza, * cola;
	int tamano;

};


#endif // !Lista_H


