#pragma once
#include "Endereco.h"
class Pessoa :
	public Endereco
{
private:
	string nome;
	string telefone;
	Endereco endereco;

public:
	//Construtores
	Pessoa(string nom);
	Pessoa(string nom, string tele, Endereco ender);

	//Funções set
	void setNome(string nom);
	void setTelefone(string tele);
	void setEndereco(Endereco ender);

	//Funções get
	string getNome();
	string getTelefone();
	Endereco getEndereco();
};

