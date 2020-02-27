#ifndef MEDICO_H
#define MEDICO_H

#include <Pessoa.h>


class Medico : public Pessoa
{
    public:
        Medico();
        virtual ~Medico();

        void setLicensa(bool licensa);// true se o medico for licenciado false se não
        bool getLicensa(); //retorna se é licenciado ou não

        void setFuncionarioPublico(bool funcionario_publico); // true se for funcionario publico false se não
        bool getFuncionarioPublico(); // retorna se é funcionario publico ou não
    protected:

    private:
        bool licenciado;
        bool funcionarioPublico;
};

#endif // MEDICO_H
