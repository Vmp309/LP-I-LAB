#include "Consultor.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	//Funcionario
	Funcionario f1 = Funcionario();
	f1.setMatricula("1234566789");
	f1.setNome("Josenildo Rocha");
	f1.setSalario(2800);

	Funcionario f2 = Funcionario();
	f2.setMatricula("987654321");
	f2.setNome("Martinho da Vila");
	f2.setSalario(5000);

	Funcionario f3 = Funcionario();
	f3.setMatricula("01927348454");
	f3.setNome("Adoniran Barbosa");
	f3.setSalario(10000);


	//Consultores
	Consultor c1 = Consultor();
	c1.setFuncionario(f2);
	cout << c1.getSalario2() << endl;

	Consultor c2 = Consultor();
	c2.setFuncionario(f3);
	cout << c2.getSalario3(50) << endl;
	
}