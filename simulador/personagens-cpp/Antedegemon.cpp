#include "../personagens-hpp/Antedeguemon.hpp"

Antedeguemon::Antedeguemon(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Antedeguemon::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Antedeguemon::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Antedeguemon::pegarDescricao() 
{
    return "Antedeguemooon";
}