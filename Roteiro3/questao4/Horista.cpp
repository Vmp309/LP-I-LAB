#include "Horista.h"

//Construtor
Horista::Horista(){}
Horista::~Horista(){}

//Metodos set
void Horista::setSalarioHora(double salarioHora){
    this->salarioHora = salarioHora;
}

void Horista::setHorasTrabalhadas(double horasTrabalhadas){
    this->horasTrabalhadas = horasTrabalhadas;
}


//Metodos get
double Horista::getSalarioHora(){
    return this->salarioHora;
}

double Horista::getHorasTrabalhadas(){
    return this->horasTrabalhadas;
}
