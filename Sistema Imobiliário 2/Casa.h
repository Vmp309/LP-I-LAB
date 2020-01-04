#pragma once
#include "Imovel.h"
class Casa : public Imovel
{
private:
	int numeroPavimentos;
	int numeroQuartos;
	double areaTerreno;
	double areaConstruida;

public:
	//Construtores
	Casa();

	//Funções set para atributos de forma individual
	void setnumPav(int num_pav);
	
	void setnumQuartos(int num_quartos);

	void setAreaTerreno(double area_terreno);

	void setAreaContruida(double area_construida);


	
	//Funções get para recuperar informações de forma individual e um para recuperar tudo
	int getnumPav();

	int getnumQuartos();

	double getAreaTerreno();

	double getAreaConstruida();

	void toStringCasa();
};

