#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	//endereços
	Endereco ender1 = Endereco(103, "Maximiano Pedrosa", "Castelo Branco","123-456", "Joao Pessoa", "PB");
	Endereco ender2 = Endereco(163, "Ministro Albuquerque Lima", "Conjunto Ceará", "564-1928", "Fortaleza", "CE");
	Endereco ender3 = Endereco(902, "BR-101", "Pacauba", "1283-456", "Pacatuba", "CE");

	//Objetos
	Pessoa p1 = Pessoa("Eu", "(89) 91234-5678", ender1);
	Pessoa p2 = Pessoa("Victoria Monteiro Pontes", "(89)98765-8765", ender2);
	Pessoa p3 = Pessoa("Myself");

	//Obtendo atributos de p1
	cout << p1.getNome() << endl;
	cout << p1.getTelefone() << endl;
	ender1.toString();

	//Modificando atributos do objeto p1
	p1.setNome("Victoria Monteiro Solon");
	p1.setTelefone("(85)90123-24536");
	p1.setEndereco(ender3);

	//Obtendo os atributos do objeto modificado p1
	cout << p1.getNome() << endl;
	cout << p1.getTelefone() << endl;
	ender1.toString();

	//Obtendo atributos de p2
	cout << p3.getNome() << endl;
	ender3.toString();
}