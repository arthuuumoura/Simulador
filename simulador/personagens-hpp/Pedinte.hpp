#ifndef PEDINTE
#define PEDINTE
#include "../core-simulador-hpp/Personagem.hpp"
class Pedinte : public Personagem
{
    public:
        Pedinte(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif