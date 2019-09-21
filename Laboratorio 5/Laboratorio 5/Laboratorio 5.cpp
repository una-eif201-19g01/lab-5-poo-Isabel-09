
#include <iostream>
#include "Secretaria.h"
#include "Gerente.h"
#include "Vendedor.h"
#include "Trabajadores.h"
#include"Empresa.h"
int main(){
	Trabajador trabajador1("9fjnn", 48, 3500, 1);
	Trabajador trabajador2("79fgd", 50, 2500, 2);
	Trabajador trabajador3("09fvf", 60, 5600, 9);
	Trabajador trabajador4("34eff", 59, 2100, 8);
	Trabajador trabajador5("2sdfv", 70, 2310, 6);
	Trabajador trabajador6("8xncj", 35, 3250, 3);

	Empresa empresa(trabajador1);
	Secretaria secretaria("756996", 35, 1255.55, 3);
	Gerente    gerente("eijfk89", 49, 2345.33, 2, 3000);
	Vendedor   vendedor("nindkd", 65, 2344, 4, 2500, 1200000);
	empresa.agregarSecretaria(secretaria);
	empresa.agregarGerente(gerente);
	empresa.agregarVendedor(vendedor);
	std::vector<Secretaria> secretarias = empresa.getSecretaria();
	for (int cont = 0; cont < secretarias.size(); cont++)
	{
		std::cout << "secretaria: " << secretarias[cont].toString();
	}
	std::vector<Gerente> gerentes = empresa.getGerente();
	for (int cont = 0; cont < gerentes.size(); cont++)
	{
		std::cout << "gerente: " << gerentes[cont].toString();
	}
	
	std::vector<Vendedor> vendedores = empresa.getVendedor();
	for (int cont = 0; cont < vendedores.size(); cont++)
	{
		std::cout << "vendedor: " << vendedores[cont].toString();
	}

	

	
	
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


	

	return 0;
}


