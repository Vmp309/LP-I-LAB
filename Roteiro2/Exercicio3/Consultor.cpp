#include "Consultor.h"
#include <string>

using namespace std;

//Construtor
Consultor::Consultor() {};


//Fun��es set
void Consultor::setFuncionario(Funcionario f) {
	funcionario = f;
};

// Fun��es get
float Consultor::getSalario2() {
	return 1.1 * getSalario();
}

float Consultor::getSalario3(float percentual) {
	return (percentual / 100) * getSalario();
}