#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(){}

ContaCorrente::ContaCorrente(std::string nomeCliente, int numero, double saldo, double salario, int limite){
    this->nomeCliente = nomeCliente;
    this->numero = numero;
    this->saldo = saldo;
    this->salario = salario;
    this->limite = limite;
}

//Metodos set
void ContaCorrente::setSalario(double salario){
    this->salario = salario;
}

void ContaCorrente::setLimite(double limite){
    this->limite = limite;
}


//Metodos get
double ContaCorrente::getSalario(){
    return this->salario;
}

double ContaCorrente::getLimite(){
    return this->limite;
}


double ContaCorrente::definirLimite(){
    
}