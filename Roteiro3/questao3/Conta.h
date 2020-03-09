#pragma once
#include <string>

class Conta {
protected:
    std::string nomeCliente;
    int numero;
    double saldo;

public: 
    Conta();
    Conta(std::string nomeCliente, int numero, double saldo);
    ~Conta();

    //Metodos set
    void setNomeCliente(std::string nomeCliente);

    void setNumero (int numero);
    
    void setSaldo (double saldo);


    //Metodos get
    std::string getNomeCliente();

    int getNumero();

    double getSaldo();

    //Metodos de saque e deposito

    void sacar(double valor);

    void depositar(double valor);
};