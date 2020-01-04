#pragma once
#include <string>
#include "Endereco.h"

using namespace std;

class Imovel : public Endereco
{
private:
	int tipoImovel; // 1--> Casa; 2--> Apartamento; 3--> Terrreno;
	int tipoOferta; // 1--> Venda; 2--> Aluguel
	string tituloAnuncio;
	Endereco endereco;
	

public:
	//Construtores
	Imovel();
	Imovel(int tipoImovel);

	//Funções para setar variaveis
	void setTipoImovel(int tipo_imovel);

	void setTipoOferta(int tipo_oferta);

	void setTituloAnuncio(string titulo_anuncio);

	void setEndereco(Endereco ender);


	//Funções get para recuperar informações dos objetos de forma individual e um para recuperar tudo de uma só vez
	int getTipoImovel();

	int getTipoOferta();

	string getTituloAnuncio();

	Endereco getEndereco();

	void toStringImovel(); 
/* Sobre cadastroImovel: Setar as variáveis do Imóvel, cuidado,pois ainda é necessário setar as variáveis específicas de cada tipo de imóvel*/


};