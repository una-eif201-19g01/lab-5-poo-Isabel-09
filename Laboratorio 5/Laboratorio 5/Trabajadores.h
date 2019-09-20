#pragma once
#include <ostream>
#include "Nodo.h"

class Trabajadores {
	Nodo* primero;
	Nodo* actual;

public:
	Trabajadores();

	virtual ~Trabajadores();

	void insertarInicio(const Trabajador& _trabajador);
	void insertarFinal(const Trabajador& _trabajador);
	bool eliminarInicio();
	int totalNodos();
	bool listaVacia();

	Nodo* getPrimero() const;

	void setPrimero(Nodo* primero);

	Nodo* getActual() const;

	void setActual(Nodo* actual);

	std::string toString();
};
