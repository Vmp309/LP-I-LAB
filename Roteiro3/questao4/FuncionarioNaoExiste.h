#pragma once
#include <string>
#include <exception>

class FuncionarioNaoExiste : public std::exception{
    private:
        std::string e = "Funcionario nao existe!";

    public:
        FuncionarioNaoExiste();
        std::string msg_erro();

};