#include "Apartamento.h"

//Construtor(es)
Apartamento::Apartamento() {};


//Funções set
void Apartamento::setnumQuartos(int num_quartos) {
	numeroQuartos - num_quartos;
}

void Apartamento::setnumVagas(int num_vagas) {
	numeroVagas = num_vagas;
}

void Apartamento::setArea(double Area) {
	area = Area;
}

void Apartamento::setValorCondominio(double valor_condominio) {
	valorCondominio = valor_condominio;
}

void Apartamento::setPosicao(string pos) {
	posicao = pos;
}


// Funções get
int Apartamento::getnumQuartos() {
	return numeroQuartos;
}

int Apartamento::getnumVagas() {
	return numeroVagas;
}

double Apartamento::getArea() {
	return area;
}

double Apartamento::getValorCondominio() {
	return valorCondominio;
}

string Apartamento::getPosicao() {
	return posicao;
}

void Apartamento::toStringApartamento() {
	cout << "Numero de quartos: " << numeroQuartos << endl;
	cout << "Numero de vagas na garagem: " << numeroVagas << endl;
	cout << "Area: " << area << endl;
	cout << "Valor do Condominio: " << valorCondominio << endl;
	cout << "Posicao em relacao ao sol: " << posicao << endl;
}