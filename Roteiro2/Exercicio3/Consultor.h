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

	//Fun��o set
	void setFuncionario(Funcionario f);

	//M�todos
	float getSalario2();
	float getSalario3(float percentual);
};

