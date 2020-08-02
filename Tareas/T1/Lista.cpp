#include "Lista.h"
#include <iostream>

using namespace std;


Lista::Lista()
{
	this->cabeza = NULL;
	this->tamano = 0;
}

void Lista::agregar(NodoEstudiante* nuevo) {
	if (cabeza == NULL) {
		this->cabeza = nuevo;
		this->cola = nuevo;
		tamano++;
	}
	else {
		this->cola->setSiguiente(nuevo);
		this->cola = nuevo;
		tamano++;
	}
}

void Lista::imprimir() {
	NodoEstudiante* aux= this->cabeza;
	while (aux != NULL)
	{
		cout << "Carne: " << aux->getCarne() << " Nombre: " << aux->getNombre()<<endl;
		aux = aux->getSiguiente;
	}

}

NodoEstudiante* Lista::buscar(int carne) {
	NodoEstudiante* aux = this->cabeza;
	if (carne < 0) { return NULL; }
	while (aux != NULL) {
		if (aux->getCarne() == carne) {
			return aux;
		}
		
		aux = aux->getSiguiente();
	}
	cout << "Carne no encontrado";
}

void Lista::eliminar(int carne) {
	NodoEstudiante* aux = this->cabeza;
	NodoEstudiante* ant = aux;
	if (carne < 0) { return; }
	while (aux != NULL) {
		if (aux->getCarne() == carne) {
			this->tamano--;
			ant->setSiguiente(aux->getSiguiente());
			if (aux == this->cabeza) {
				this->cabeza = aux->getSiguiente();
			}
			else if (aux == this->cola) {
				this->cola = ant;
			}
			delete aux;
			return;
		}
		
		ant = aux;
		aux = aux->getSiguiente();
	}
}

int Lista::tamanoLista() {
	return this->tamano;
}

Lista::~Lista()
{
	NodoEstudiante* aux = this->cabeza;
	NodoEstudiante* temporal;
	while (aux != NULL) {
		temporal = aux->getSiguiente();
		delete aux;
		aux = temporal;
	}
}
