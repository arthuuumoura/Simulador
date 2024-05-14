#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Tunica.hpp"

Tunica::Tunica(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Tunica::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Tunica::getResistencia() 
{
    return this->resistencia;
}