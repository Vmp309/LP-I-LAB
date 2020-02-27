#include <iostream>
#include "Pessoa.h"
#include "Medico.h"
#include "Policial.h"

using namespace std;

int main()
{
    /// Criar um array polim�fico, ou seja com a classe M�dico e a classe Policial utilizando a classe pai Pessoa

    Pessoa *pessoas[3];

    pessoas[0] = new Pessoa();
    pessoas[1] = new Medico();
    pessoas[2] = new Policial();

    pessoas[0]->setNome("Jailton Medeiros");
    pessoas[0]->setRg(32164789);

    pessoas[1]->setNome("Marcos de Paula");
    pessoas[1]->setRg(123456789);


    pessoas[2]->setNome("Mariana Soares");
    pessoas[2]->setRg(9874551234);


    for (int i = 0; i < 3; i++){
       cout << pessoas[i]->getNome() << endl <<
        pessoas[i]->getRg() << endl;
    }
}
