#include "Imovel.h"
// Construtores
Imovel::Imovel() {};
Imovel::Imovel(int tipo_imovel) {};


//Funções set
void Imovel::setTipoImovel(int tipo_imovel) {
	tipoImovel = tipo_imovel;
};

void Imovel::setTipoOferta(int tipo_oferta) {
	tipoOferta = tipo_oferta;
};

void Imovel::setTituloAnuncio(string titulo_anuncio) {
	tituloAnuncio = titulo_anuncio;
};

void Imovel::setEndereco(Endereco ender) {
	endereco = ender;
};




void Imovel::toStringImovel() {
	switch (tipoImovel) {
	case 1:
		cout << "Casa ";
		break;
	case 2:
		cout << "Apartamento ";
		break;

	case 3:
		cout << "Terreno ";
		break;

	default:
		break;
	}

	switch (tipoOferta)
	{
	case 1:
		cout << "à venda" << endl;
		break;

	case 2:
		cout << "para alugar" << endl;
		break;
	default:
		break;
	}

};