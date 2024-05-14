#include "../personagens-hpp/Soldado.hpp"

Soldado::Soldado(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Soldado::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Soldado::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Soldado::pegarDescricao() 
{
    return "ESPARTANOS QUAL E SUA MISSAO";
}