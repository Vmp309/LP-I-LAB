#include "Consultor.h"
#include <string>

using namespace std;

//Construtor
Consultor::Consultor() {};


//Funções set
void Consultor::setFuncionario(Funcionario f) {
	funcionario = f;
};

// Funções get
float Consultor::getSalario2() {
	return 1.1 * getSalario();
}

float Consultor::getSalario3(float percentual) {
	return (percentual / 100) * getSalario();
}