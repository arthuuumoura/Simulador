#include "../personagens-hpp/Pokemon.hpp"

Pokemon::Pokemon(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Pokemon::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Pokemon::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Pokemon::pegarDescricao() 
{
    return "POKEMOOOON";
}