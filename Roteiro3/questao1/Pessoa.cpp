#include "Pessoa.h"

Pessoa::Pessoa()
{
    //ctor
}

Pessoa::~Pessoa()
{
    //dtor
}

void Pessoa::setNome(std::string nom){
    nome = nom;
}

std::string Pessoa::getNome(){
    return nome;
}

void Pessoa::setRg(int RG){
    rg = RG;
}

int Pessoa::getRg(){
    return rg;
}
