#pragma once
#include <iostream>
#include <string>

using namespace std;


class Endereco
{
private:
	int numero;
	string rua;
	string bairro;
	string cep;
	string cidade;

public:
	// Construtores
	Endereco();
	Endereco(int num, string street, string bairr, string CEP, string city);


	//Funções para setar individualmente cada atributo
	void setNumero(int num);

	void setRua(string street);

	void setBairro(string bairr);

	void setCep(string CEP);

	void setCidade(string city);


	//Funções get para recuperar o atributos individualmente e um para recuperar todo
	int getNumero();

	string getRua();

	string getBairro();

	string getCep();

	string getCidade();

	void toStringEndereco();
};
