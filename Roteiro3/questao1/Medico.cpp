#include "Medico.h"

Medico::Medico()
{
    //ctor
}

Medico::~Medico()
{
    //dtor
}

void Medico::setLicensa(bool licensa){
    licenciado = licensa;
}

void Medico::setFuncionarioPublico(bool funcionario_publico){
    funcionarioPublico = funcionario_publico;
}
