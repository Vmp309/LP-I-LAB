#pragma once
#include "Funcionario.h"
class Consultor :
	public Funcionario
{
public:
	//Construtor
	Consultor();

	//Funcionario
	Funcionario funcionario;

	//Função set
	void setFuncionario(Funcionario f);

	//Métodos
	float getSalario2();
	float getSalario3(float percentual);
};

