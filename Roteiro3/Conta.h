#ifndef CONTA_H
#define CONTA_H

#include <IConta.h>
#include <string>

class Conta : public IConta
{
    public:
        Conta();
        virtual ~Conta();

    protected:
        void setNomeCliente(std::string nome);
        void setSalarioMensal(double valor);
        void setLimite (double limite);
        void setNumeroConta(std::string numeroConta);
        std::string getNomeCliente();
        double getSalarioMensal();
        double getLimite();
        std::string getNumeroConta();

    private:
        std::string nomeCliente;
        double salarioMensal;
        double limite;
        std::string numeroConta;
};

#endif // CONTA_H
