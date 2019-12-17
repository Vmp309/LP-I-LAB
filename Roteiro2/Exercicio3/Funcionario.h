#pragma once
#include <string>

using namespace std;

class Funcionario
{
private:
	string matricula;
	string nome;
	float salario;

public:

	//Contrutor
	Funcionario();

	//Fun��es set
	void setMatricula(string matri);
	void setNome(string nom);
	void setSalario(float sal);

	//Fun��es get
	string getMatricula();
	string getNome();
	float getSalario();
};

