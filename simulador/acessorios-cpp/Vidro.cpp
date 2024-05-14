#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Vidro.hpp"

Vidro::Vidro(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Vidro::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Vidro::gerarRuidoAtaque()
{
    return "swin";
}
