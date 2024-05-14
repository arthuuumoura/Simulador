#ifndef POKEMON
#define POKEMON
#include "../core-simulador-hpp/Personagem.hpp"
class Pokemon : public Personagem
{
    public:
        Pokemon(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif