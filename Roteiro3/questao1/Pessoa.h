#ifndef PESSOA_H
#define PESSOA_H
#include <string>


class Pessoa
{
    public:
        Pessoa();
        virtual ~Pessoa();

        void setNome(std::string nom);
      std::string getNome();

      void setRg(int RG);
      int getRg();

    protected:


    private:
         int rg;
        std::string nome;
};

#endif // PESSOA_H
