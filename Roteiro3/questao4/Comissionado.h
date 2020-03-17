#pragma once
#include "Funcionario.h"

class Comissionado : public Funcionario{
    private:
        double vendasSemanais;
        double percentualComissao;

    public:
        //Construtor
        Comissionado();

        //Destrutor
        ~Comissionado();

        //Metodos set
        void setVendasSemanais(double vendasSemanais);

        void setPercentalComissao(double percentualComissao);

        
        //Metodos get
        double getVendasSemanais();

        double getPercentualComissao();


        //Metodo abstrato da classe Funcionario
        double calcularSalario(){
            return (this->percentualComissao/100) * this->vendasSemanais;
        }
};