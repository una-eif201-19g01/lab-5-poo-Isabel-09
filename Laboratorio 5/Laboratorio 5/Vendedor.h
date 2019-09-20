#pragma once
#include "Trabajador.h"
#include <string>
class Vendedor:public Trabajador
{ 
	float comision;
	int ventas;
	public:
		Vendedor(std::string, int, float, int, float, int);
		float  porcentajeComision();
		float SalarioBruto();
		void setComision(float);
		void setVentas(int);
		float getComision();
		int getVentas();
		std::string tostring();
};

