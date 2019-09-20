#include "Trabajador.h"
#include <sstream>
Trabajador::Trabajador(){

}
Trabajador::Trabajador(std::string id, int horasLab, float precioHora, int annoLaborados) {
	this->id = id;
	this->horasLab = horasLab;
	this->annoLaborados = annoLaborados;

}
float Trabajador::calcularSalarioBase() {
	int horas = horasLab;
	while (horas > 48) {
		horas--;
	}
	return horas*precioHora;
}
float Trabajador::calcularHorasExtras() {
	float extrahora ;
	float precio;
	int num = horasLab-48;
	if (num >0) {
		precio = precioHora * 0.5;
		extrahora = precio;
	}
	else {
		extrahora = 0;
	}
	return extrahora;
}

float Trabajador::calcularAnualidades() {
	float anualidad;
	if (annoLaborados == 1) {
		anualidad = 0.05 * calcularSalarioBase();
	}
	else {
		anualidad = (0.05 * annoLaborados) * calcularSalarioBase();
	}
	return anualidad;
}
float Trabajador::calcularSalarioBruto() {
	float bruto;
	bruto=(calcularSalarioBase() + calcularHorasExtras() + calcularAnualidades());
	return bruto;
}

float Trabajador::calcularCargas() {
	float cargas;
	cargas = 0.09 * calcularSalarioBase();
	return cargas;
}
float Trabajador::calcularSalarioNeto() {
	float neto;
	neto=calcularSalarioBruto() - calcularCargas();
	return neto;
}
void Trabajador::setID(std::string id) {

	this->id = id;
}
void Trabajador::setHorasLab(int horasLab) {
	this->horasLab = horasLab;
}
void Trabajador::setPrecioHora(float precioHora) {
	this->precioHora = precioHora;
}
void Trabajador::setAnnoLaborados(int annoLaborados) {
	this->annoLaborados = annoLaborados;
}
std::string  Trabajador::getID() {
	return id;
}
int Trabajador::getHorasLab() {
	return horasLab;
}
float Trabajador::getPrecioHora() {
	return precioHora;
}
int Trabajador::getAnnoLaborados() {
	return annoLaborados;
}
std::string Trabajador::toString() {
	std::stringstream s;
	s << "El salario Base es :" << calcularSalarioBase() << std::endl;
	s << "Salario Bruto es :" << calcularSalarioBruto() << std::endl;
	s<<"Salario Neto es :"<<calcularSalarioNeto()<<std::endl;

	return s.str();
}
