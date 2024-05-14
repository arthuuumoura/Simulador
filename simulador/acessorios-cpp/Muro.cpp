#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Muro.hpp"

Muro::Muro(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Muro::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Muro::getResistencia() 
{
    return this->resistencia;
}