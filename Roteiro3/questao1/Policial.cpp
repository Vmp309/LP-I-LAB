#include "Policial.h"

Policial::Policial()
{
    //ctor
}

Policial::~Policial()
{
    //dtor
}

void Policial::setHonras(bool honra){
honras = honra;
}

void Policial::setPresencaDeQueixas(bool queixa){
presencaDeQueixas = queixa;
}

void Policial::setPerfilPsicologico(std::string perfil){
perfilPsicologico = perfil;
}
