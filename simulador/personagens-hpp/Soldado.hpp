#ifndef SOLDADO
#define SOLDADO
#include "../core-simulador-hpp/Personagem.hpp"
class Soldado : public Personagem
{
    public:
        Soldado(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif