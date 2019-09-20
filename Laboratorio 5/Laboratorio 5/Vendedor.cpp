#include "Vendedor.h"
#include<sstream>

Vendedor::Vendedor(std::string id, int horasLab, float precioHora, int annoLaborales,float comision,int ventas) {
	Trabajador(id, horasLab, precioHora, annoLaborales);
	this->comision = comision;
	this->ventas = ventas;
}

float Vendedor::porcentajeComision() {
	float comi;
	comi = ventas * 0.1;
	return comi;
}
float Vendedor::SalarioBruto() {
	return calcularSalarioBruto() + porcentajeComision();
}

std::string Vendedor::tostring() {
	std::stringstream s;
	s << toString() <<std::endl;
	s << "El salario Bruto del Vendedor es:" << calcularSalarioBruto() <<std::endl;
	return s.str();
}



