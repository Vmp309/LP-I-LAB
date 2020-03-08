#include "Conta.h"
#include <string>
#include <iostream>

//Construtores
Conta::Conta() {}

Conta::Conta(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo, double limite) {
	this->nomeCliente = nomeCliente;
	this->salarioMensal = salarioMensal;
	this->numeroConta = numeroConta;
	this->saldo = saldo;
	this->limite = limite;
}

//Destrutor
Conta::~Conta(){}

//Implementação de sets
void Conta::setNomeCliente(std::string nomeCliente) {
	this->nomeCliente = nomeCliente;
};

void Conta::setSalarioMensal(double salarioMensal) {
	this->salarioMensal = salarioMensal;
}

void Conta::setNumeroConta(std::string numeroConta) {
	this->numeroConta = numeroConta;
};

void Conta::setSaldo(double saldo) {
	this->saldo = saldo;
};

void Conta::setLimite(double limite) {
	this->limite = limite;
}


//Implementacao de gets
std::string Conta::getNomeCliente() {
	return this->nomeCliente;
}

double Conta::getSalarioMensal() {
	return this->salarioMensal;
}

std::string Conta::getNumeroConta() {
	return this->numeroConta;
}

double Conta::getSaldo() {
	return this->saldo;
}

double Conta::getLimite() {
	return this->limite;
}


//Funcao definirLimite
void Conta::definirLimite() {
	this->limite = 2 * this->salarioMensal;
}

//Funcao saque e deposito
 void Conta::sacar(double valor) {
	 if (this->saldo >= valor) {
		 this->saldo -= valor;
		 std::cout << "Saque efetuado com sucesso" << std::endl;
	 }
	 else {
		 std::cout << "Saldo insuficiente" << std::endl;

	 }
}

void Conta::depositar(double valor) {
	if (valor <= this->limite){
		this->saldo += valor;
		std::cout << "Deposito efetuado com sucesso" << std::endl;
	}else{
		std::cout << "Limite de deposito excedido" << std::endl;
	}
}
