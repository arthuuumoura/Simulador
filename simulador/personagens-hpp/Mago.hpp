#ifndef MAGO
#define MAGO
#include "../core-simulador-hpp/Personagem.hpp"
class Mago : public Personagem
{
    public:
        Mago(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif