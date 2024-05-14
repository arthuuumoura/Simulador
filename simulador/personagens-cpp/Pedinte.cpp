#include "../personagens-hpp/Pedinte.hpp"

Pedinte::Pedinte(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Pedinte::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Pedinte::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Pedinte::pegarDescricao() 
{
    return "Me da um real";
}