#pragma once
#include <string>
#include <exception>

class OrcamentoEstourado : public std::exception{
    private:
        std::string e = "Orcamento estourado";

    public: 
        OrcamentoEstourado();
        std::string msg_erro();
};