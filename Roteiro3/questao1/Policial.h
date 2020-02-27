#ifndef POLICIAL_H
#define POLICIAL_H

#include <Pessoa.h>


class Policial : public Pessoa
{
    public:
        Policial();
        virtual ~Policial();

        void setPresencaDeQueixas(bool queixa);
        void setHonras(bool honra);
        void setPerfilPsicologico(std::string perfil);

        bool getPresencaDeQueixas();
        bool getHonras();



    protected:
    bool presencaDeQueixas;
    bool honras;
    std::string perfilPsicologico;

    private:
};

#endif // POLICIAL_H
