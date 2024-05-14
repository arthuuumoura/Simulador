#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Porrete.hpp"

Porrete::Porrete(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Porrete::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Porrete::gerarRuidoAtaque()
{
    return "push";
}
