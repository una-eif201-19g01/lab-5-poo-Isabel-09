#include "Gerente.h"
#include <sstream>
Gerente::Gerente(std::string id, int horasLab, float precioHora, int annoLaborales,float bono) {
	Trabajador(id, horasLab, precioHora, annoLaborales);
	this->bono = bono;
}

float Gerente::SalarioBruto() {
	return calcularSalarioBruto() + bono;
}
void Gerente::setBono(float bono) {
	this->bono = bono;
}
float Gerente::getBono() {
	return bono;
}
std::string Gerente::tostring() {
	std::stringstream s;

	s << "El Salario Base es :"<<calcularSalarioBase() << std::endl;
	s << "El Salario Neto es :" << calcularSalarioNeto() << std::endl;
    s<<" El salario bruto de gerente es: "<<SalarioBruto()<<std::endl;
	return s.str();

}