#include "Endereco.h"
#include <iostream>

//Construtores
Endereco::Endereco() {};

Endereco::Endereco(int num, string street, string brr, string cep, string city, string state) {
	numero = num;
	rua = street;
	bairro = brr;
	CEP = cep;
	cidade = city;
	estado = state;

};


//Método
void Endereco::toString() {
	cout << "Numero: " << numero << endl;
	cout << "Rua: " << rua << endl;
	cout << "Bairro: " << bairro << endl;
	cout << "CEP: " << CEP << endl;
	cout << "Cidade: " << cidade << endl;
	cout << "Estado: " << estado << endl;
}