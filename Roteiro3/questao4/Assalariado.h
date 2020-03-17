#pragma once
#include "Funcionario.h"

class Assalariado : public Funcionario{

    private:
        double salario;

    public:
        //Construtor
        Assalariado();

        //Destrutor
        ~Assalariado();

        //Metodo set
        void setSalario (double salario);

        //Metodo get
        double getSalario();

        //Metodo abstrato da classe Funcionario
        double calcularSalario(){
            return this->salario;
        };
};