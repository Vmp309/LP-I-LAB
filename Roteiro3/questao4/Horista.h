#pragma once
#include "Funcionario.h"

class Horista : public Funcionario{
    private:
        double salarioHora;
        double horasTrabalhadas;

    public:
        //Construtor
        Horista();

        //Destrutor
        ~Horista();

        //Metodos set
        void setSalarioHora(double salarioHora);

        void setHorasTrabalhadas(double horasTrabalhadas);


        //Metodos get
        double getSalarioHora();

        double getHorasTrabalhadas();


        //Metodo abstrato da classe Funcionario
        double calcularSalario(){
            return this->salarioHora * this->horasTrabalhadas;
        }
};