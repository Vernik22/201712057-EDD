//librerias
#include "NodoEstudiante.h"
#include <iostream>

NodoEstudiante::NodoEstudiante(int carne, string nombre) {
	this->carne = carne;
	this->nombre = nombre;
	this->siguiente = NULL;
}

string NodoEstudiante::getNombre() {
	return this->nombre;
}

int NodoEstudiante::getCarne() {
	return this->carne;
}

NodoEstudiante* NodoEstudiante::getSiguiente() {
	return this->siguiente;
}

void NodoEstudiante::imprimir() {
	cout << "Carne: " << this->getCarne() << " Nombre: " << this->getNombre()<<endl;
}

void NodoEstudiante::setSiguiente(NodoEstudiante* sig) {
	this->siguiente = sig;
}
NodoEstudiante::~NodoEstudiante() {

}