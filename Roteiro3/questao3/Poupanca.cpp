#include "Poupanca.h"

//Construtores
Poupanca::Poupanca(){};

Poupanca::Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento){
    Conta(nomeCliente, numero, saldo);
    this->variacao = variacao;
    this->taxaRendimento = taxaRendimento;

}


//Metodos set
void Poupanca::setVariacao(int variacao){
    this->variacao = variacao;
}

void Poupanca::setTaxaRendimento(double taxaRendimento){
    this->taxaRendimento = taxaRendimento;
}

//Metodos get
int Poupanca::getVariacao(){
    return this->variacao;
}

double Poupanca::getTaxaRendimento(){
    return this->taxaRendimento;
}


//Metodo extra:
double Poupanca::render(){
    if (variacao == 51){
        saldo += saldo * (1 + taxaRendimento);
    }else if (variacao == 1){
        taxaRendimento += taxaRendimento * (5/100);
        saldo += saldo * (1 + taxaRendimento);
    }
}