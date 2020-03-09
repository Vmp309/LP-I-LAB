#include "Conta.h"
#include <iostream>

//Construtores
Conta::Conta(){}

Conta::Conta(std::string nomeCliente, int numero, double saldo){
    this->nomeCliente = nomeCliente;
    this->numero = numero;
    this->saldo = saldo;
}

//Métodos set
void Conta::setNomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setNumero(int numero){
    this->numero = numero;
}

void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}


//Metodos get
std::string Conta::getNomeCliente(){
    return this->nomeCliente;
};

int Conta::getNumero(){
    return this->numero;
}

double Conta::getSaldo(){
    return this->saldo;
}

void Conta::sacar(double valor){
    if (this->saldo >= valor){
        this->saldo -= valor;
        std::cout << "Saque efetuado com sucesso" << std::endl;
    }else{
        std::cout << "Saque nao efetuado - Saldo insuficiente" << std::endl; 
    }
}

void Conta::depositar(double valor){
    this->saldo += valor;
}