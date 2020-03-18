#include "Funcionario.h"

//Construtores
Funcionario::Funcionario(){};
Funcionario::~Funcionario(){};

Funcionario::Funcionario(std::string nome, int matricula){
    this->nome = nome;
    this->matricula = matricula;
}


//Metodo set
void Funcionario::setNome( std::string nome){
    this->nome = nome;
}

void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}


//Metodo get
std::string Funcionario::getNome(){
    return this->nome;
}

int Funcionario::getMatricula(){
    return this->matricula;
}
