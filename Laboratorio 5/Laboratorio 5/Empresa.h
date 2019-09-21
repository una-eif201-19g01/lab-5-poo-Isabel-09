#pragma once
#include <vector>
#include "Gerente.h"
#include "Secretaria.h"
#include "Vendedor.h"
#include "Trabajador.h"
class Empresa
{
	Trabajador trabajador;
	std::vector<Gerente>gerente;
	std::vector<Secretaria>secretaria;
	std::vector<Vendedor>vendedor;
	public:
		Empresa(Trabajador& trabajador);
		void agregarSecretaria(Secretaria _secretaria);
		void agregarGerente(Gerente _gerente);
		void agregarVendedor(Vendedor  _vendedor);
		 
		const std::vector<Vendedor>& getVendedor() const;
		const std::vector<Secretaria>& getSecretaria() const;
		const std::vector<Gerente>& getGerente() const;
		std::string toString();
};

