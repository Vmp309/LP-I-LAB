#pragma once
#include "Conta.h"

class Poupanca : public Conta {
    private:
        int variacao;
        double taxaRendimento;

    public:
        // Construtores
        Poupanca();
        Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento);

        //Destrutor
        ~Poupanca();

        
        //Metodos set
         void setVariacao(int variacao);

         void setTaxaRendimento(double taxaRendimento);


        //Metodos get
        int getVariacao();

        double getTaxaRendimento();


        //Metodos extras:
        double render();
};