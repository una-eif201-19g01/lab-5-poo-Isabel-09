
#include <iostream>
#include "Secretaria.h"
#include "Gerente.h"
#include "Vendedor.h"
#include "Trabajadores.h"
int main(){

	Trabajador trabajador1("9fjnn", 48, 3500, 1);
	Trabajador trabajador2("79fgd", 50, 2500, 2);
	Trabajador trabajador3("09fvf", 60, 5600, 9);
	Trabajador trabajador4("34eff", 59, 2100, 8);
	Trabajador trabajador5("2sdfv", 70, 2310, 6);
	Trabajador trabajador6("8xncj", 35, 3250, 3);

	
	
	Trabajadores* trabajadores=new Trabajadores();
	trabajadores->insertarInicio(trabajador1);
	trabajadores->insertarInicio(trabajador2);
	trabajadores->insertarInicio(trabajador3);
	trabajadores->insertarInicio(trabajador4);
	trabajadores->insertarInicio(trabajador5);
	std::cout<<trabajadores->toString()<<std::endl;
	trabajadores->eliminarInicio();
	trabajadores->insertarFinal(trabajador6);
	std::cout<<trabajadores->toString()<<std::endl;


	Secretaria secretaria("756996", 35, 1255.55, 3);
	Gerente    gerente("eijfk89", 49, 2345.33, 2, 3000);
	Vendedor   vendedor("nindkd", 65, 2344, 4, 2500, 1200000);
	std::cout << "Los datos de la secretaria son :" << std::endl << secretaria.toString() << std::endl;
	std::cout << "Los datos del  gerente son :" << std::endl << gerente.tostring() << std::endl;
	std::cout << "Los datos del vendedor son :" << std::endl << vendedor.tostring() << std::endl;

	return 0;
}


