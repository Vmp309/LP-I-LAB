#include "Pessoa.h"

//Construtores
Pessoa::Pessoa(string nom) {
	setNome(nom);
}

Pessoa::Pessoa(string nom, string tele, Endereco ender) {
	setNome(nom);
	setTelefone(tele);
	setEndereco(ender);
}


//Fun��es set
void Pessoa::setNome(string nom) {
	nome = nom;
}

void Pessoa::setTelefone(string tele) {
	telefone = tele;
}

void Pessoa::setEndereco(Endereco ender) {
	endereco = ender;
}

//Fun��es get
string Pessoa::getNome() {
	return nome;
}

string Pessoa::getTelefone() {
	return telefone;
}

Endereco Pessoa::getEndereco() {
	return endereco;
}