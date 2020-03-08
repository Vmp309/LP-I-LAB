#pragma once
#include <string>
#include "IConta.h"
class Conta : public IConta
{

private:
	std::string nomeCliente;
	double salarioMensal;
	std::string numeroConta;
	double saldo;
	double limite;

public:

	//Construtores
	Conta();
	Conta(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo, double limite);

	//Destrutor
	~Conta();

	//Metodos set
	void setNomeCliente(std::string nomeCliente);

	void setSalarioMensal(double salarioMensal);
	
	void setNumeroConta(std::string numeroConta);
	
	void setSaldo(double saldo);

	void setLimite(double limite);


	//Metodos get
	std::string getNomeCliente();

	double getSalarioMensal();
	
	std::string getNumeroConta();
	
	double getSaldo();
	
	double getLimite();

	//funcoes extras
	void sacar(double valor);

	void depositar(double valor);
	
	virtual void definirLimite();
};
