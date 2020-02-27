#ifndef MEDICO_H
#define MEDICO_H

#include <Pessoa.h>


class Medico : public Pessoa
{
    public:
        Medico();
        virtual ~Medico();

        void setLicensa(bool licensa);// true se o medico for licenciado false se n�o
        bool getLicensa(); //retorna se � licenciado ou n�o

        void setFuncionarioPublico(bool funcionario_publico); // true se for funcionario publico false se n�o
        bool getFuncionarioPublico(); // retorna se � funcionario publico ou n�o
    protected:

    private:
        bool licenciado;
        bool funcionarioPublico;
};

#endif // MEDICO_H
