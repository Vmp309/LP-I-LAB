#include "Funcionario.h"

//Construtor
Funcionario::Funcionario() {};

//Funções set
void Funcionario::setMatricula(string matri) {
	matricula = matri;
};

void Funcionario::setNome(string nom) {
	nome = nom;
};

void Funcionario::setSalario(float sal) {
	salario = sal;
};


//Funções get
string Funcionario::getMatricula() {
	return matricula;
};

string Funcionario::getNome() {
	return nome;
};

float Funcionario::getSalario() {
	return salario;
};