#include "Comissionado.h"

Comissionado::Comissionado(){}
Comissionado::~Comissionado(){}

void Comissionado::setVendasSemanais(double vendasSemanais){
    this->vendasSemanais = vendasSemanais;
}

void Comissionado::setPercentalComissao(double percentualComissao){
    this->percentualComissao = percentualComissao;
}

double Comissionado::getVendasSemanais(){
    return this->vendasSemanais;
}

double Comissionado::getPercentualComissao(){
    return this->percentualComissao;
}