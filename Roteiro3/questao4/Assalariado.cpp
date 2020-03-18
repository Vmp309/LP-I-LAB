#include "Assalariado.h"

Assalariado::Assalariado(){}
Assalariado::~Assalariado(){}

//Metodo set
void Assalariado::setSalario(double salario){
    this->salario = salario;
}

//Metodo get
double Assalariado::getSalario(){
    return this->salario;
}

