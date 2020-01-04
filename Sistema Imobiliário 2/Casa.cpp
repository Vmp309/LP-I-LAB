#include "Casa.h"

//Construtores
Casa::Casa() {};

//Funções set
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

double Casa::getAreaConstruida() {
	return areaConstruida;
}

void Casa::toStringCasa() {
	cout << "Numero de pavimentos: " << numeroPavimentos << endl;
	cout << "Numero de quartos: " << numeroQuartos << endl;
	cout << "Area do terreno: " << areaTerreno << endl;
	cout << "Area construida: " << areaConstruida << endl;
}