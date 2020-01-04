#pragma once
#include "Imovel.h"
class Apartamento : public Imovel
{
private:
	int numeroQuartos;
	int numeroVagas;
	double area;
	double valorCondominio;
	string posicao;
public:
	//Construtor
	Apartamento();


	//Funções set para cada atributo
	void setnumQuartos(int num_quartos);

	void setnumVagas(int num_vagas);

	void setArea(double Area);

	void setValorCondominio(double valor_condominio);

	void setPosicao(string pos);


	//Funções get para cada atributo
	int getnumQuartos();

	int getnumVagas();

	double getArea();

	double getValorCondominio();

	string getPosicao();

	void toStringApartamento();
};

