#include "Endereco.h"
// Construtores
Endereco::Endereco() {};

Endereco::Endereco(int num, string street, string bairr, string CEP, string city) {
	numero = num;
	rua = street;
	bairro = bairr;
	CEP = cep;
	cidade = city;	
}

// Funções set
void Endereco::setNumero(int num) {
	numero = num;
}

void Endereco::setRua(string street) {
	rua = street;
}

void Endereco::setBairro(string bairr) {
	bairro = bairr;
}

void Endereco::setCep(string CEP) {
	cep = CEP;
}

void Endereco::setCidade(string city) {
	cidade = city;
}


//Funções get
int Endereco::getNumero() {
	return numero;
}

string Endereco::getRua() {
	return rua;
}

string Endereco::getBairro() {
	return bairro;
}

string Endereco::getCep() {
	return cep;
}

string Endereco::getCidade() {
	return cidade;
}

void Endereco::toStringEndereco() {
	cout << "Endereco: " << rua << ", " << numero << ", " << bairro << "; " << cep << "; " << cidade << endl;
}