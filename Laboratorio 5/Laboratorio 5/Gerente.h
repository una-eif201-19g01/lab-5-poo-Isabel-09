#pragma once
#include"Trabajador.h"
class Gerente:public Trabajador
{
	float bono;

	public:
		Gerente(std::string, int, float, int,float);

		float SalarioBruto( );
		void setBono(float);
		float getBono();
		std::string tostring();
};

