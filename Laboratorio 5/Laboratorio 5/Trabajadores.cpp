#include<sstream>
#include "Trabajadores.h"
Trabajadores::Trabajadores() {
	primero = nullptr;
	actual = nullptr;
}

Trabajadores::~Trabajadores() {
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

void Trabajadores::insertarInicio(const Trabajador& _trabajador) {
	actual = new Nodo(_trabajador, nullptr);
	if (primero == nullptr) {
		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}

void Trabajadores::insertarFinal(const Trabajador& _trabajador) {
	actual = primero;
	if (primero == nullptr) {
		primero = new Nodo(_trabajador, nullptr);
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new Nodo(_trabajador, nullptr));
	}
}

bool Trabajadores::eliminarInicio() {
	if (primero == nullptr) {
		return false;
	}
	else {
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}
}

int Trabajadores::totalNodos() {
	int totalNodos = 0;
	actual = primero;

	while (actual != nullptr) {
		totalNodos++;
		actual = actual->getSiguiente();
	}

	return totalNodos;
}

bool Trabajadores::listaVacia() {
	return primero == nullptr;
}

std::string Trabajadores::toString() {
	std::string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;
}

Nodo* Trabajadores::getPrimero() const {
	return primero;
}

void Trabajadores::setPrimero(Nodo* primero) {
	this->primero = primero;
}

Nodo* Trabajadores::getActual() const {
	return actual;
}

void Trabajadores::setActual(Nodo* actual) {
	Trabajadores::actual = actual;
}