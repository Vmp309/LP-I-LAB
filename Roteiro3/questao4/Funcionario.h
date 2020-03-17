#pragma once
#include <string>

class Funcionario{
    private:
        std::string nome; 
        int matricula;

    public:
        //Construtores
        Funcionario();
        Funcionario(std::string nome, int matricula);
        

        //Destrutor
        ~Funcionario();

        //Metodos set
        void setNome(std::string nome);

        void setMatricula (int matricula);


        //Metodos get
        std::string getNome();
        int getMatricula();

        //Metodo extra pedido na questao
        virtual double calcularSalario() =0;

};
