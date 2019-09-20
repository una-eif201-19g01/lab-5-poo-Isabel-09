#pragma once
#include <string>
class Trabajador
{
private:
	std::string id;
	int horasLab;
	float precioHora;
	int annoLaborados;
public:
	Trabajador();
	Trabajador(std::string, int, float , int);
	virtual float calcularSalarioBase();
	virtual float calcularHorasExtras();
	virtual float calcularAnualidades();
	virtual float calcularSalarioBruto();
	virtual float calcularCargas();
	virtual float calcularSalarioNeto();
	void setID(std::string);
	void setHorasLab(int);
	void setPrecioHora(float);
	void setAnnoLaborados(int);
	std::string getID();
	int   getHorasLab();
	float getPrecioHora();
	int   getAnnoLaborados();
	std::string toString();

};

