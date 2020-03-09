#pragma once
#include "Conta.h"

class ContaCorrente : public Conta
{
    private:
        double salario;
        int limite;

    public:
        //Construtores
        ContaCorrente();
        ContaCorrente(std::string nomeCliente, int numero, double saldo, double salario, int limite);
        
        //Destrutor
        ~ContaCorrente();

        //Metodos set
        void setSalario(double salario);

        void setLimite(double salario);


        //Metodos get
        double getSalario();

        double getLimite();

        double definirLimite();
};