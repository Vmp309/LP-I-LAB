#pragma once
#include <string>

using namespace std;

class Endereco
{
private:
	int numero;
	string rua;
	string bairro;
	string CEP;
	string cidade;
	string estado;

public:
	//Construtores
	Endereco();
	Endereco(int num, string street, string brr, string cep, string city, string state);

	//M�todo 
	void toString();
};

