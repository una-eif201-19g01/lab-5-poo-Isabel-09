#include "Empresa.h"
#include <utility>
Empresa::Empresa(Trabajador& trabajador) :trabajador(trabajador) {

}
void Empresa::agregarVendedor(Vendedor _vendedor) {
	vendedor.push_back(_vendedor);
}
void Empresa::agregarSecretaria(Secretaria _secretaria) {
	secretaria.push_back(_secretaria);
}
void Empresa::agregarGerente(Gerente _gerente) {
	gerente.push_back(_gerente);
}
const std::vector<Vendedor>& Empresa::getVendedor() const {
	return vendedor;
}
const std::vector<Secretaria>& Empresa::getSecretaria() const {
	return secretaria;
}
const std::vector<Gerente>& Empresa::getGerente() const {
	return gerente;
}
