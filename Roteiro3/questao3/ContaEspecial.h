#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente{
    public:
    //Construtores
    ContaEspecial();
    //Destrutor
    ~ContaEspecial();

    //Metodo extra:
    double definirLimite();
};