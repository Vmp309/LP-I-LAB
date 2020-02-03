#include "Casa.h"

//Construtores
Casa::Casa() {
	setTipoImovel(1); // Ver Imovel.h para ver especificações do parâmetro
};

//Funções set de forma individual e um que seta todos os atributos de uma só vez
void Casa::setCasa() {
	cout << "Digite o numero de pavimentos: "; cin >> numeroPavimentos;
	cout << "Digite o numero de quartos: "; cin >> numeroQuartos;
	cout << "Digite a area do terreno: "; cin >> areaTerreno;
	cout << "Digite a area construida: "; cin >> areaConstruida;
}

void Casa::setnumPav(int num_pav) {
	numeroPavimentos = num_pav;
}

void Casa::setnumQuartos(int num_quartos) {
	numeroQuartos = num_quartos;
}

void Casa::setAreaTerreno(double area_terreno) {
	areaTerreno = area_terreno;
}

void Casa::setAreaContruida(double area_construida) {
	areaConstruida = area_construida;
}


//Funções get
int Casa::getnumPav() {
	return numeroPavimentos;
}

int Casa::getnumQuartos() {
	return numeroQuartos;
}

double Casa::getAreaTerreno() {
	return areaTerreno;
}

double Casa::getAreaConstruida() {
	return areaConstruida;
}

void Casa::toStringCasa() {
	toStringImovel();
	cout << "Numero de pavimentos: " << numeroPavimentos << endl;
	cout << "Numero de quartos: " << numeroQuartos << endl;
	cout << "Area do terreno: " << areaTerreno << endl;
	cout << "Area construida: " << areaConstruida << endl;
	toStringEndereco();
}


ofstream &operator<<(ofstream&output, const Casa &cs) {
	output << cs;

	return output;
}

ifstream& operator>>(ifstream& input, const Casa &cs) {
	input >> cs;

	return input;
}
