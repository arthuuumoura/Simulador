#ifndef ANTEDEGUEMON
#define ANTEDEGUEMON
#include "../core-simulador-hpp/Personagem.hpp"
class Antedeguemon : public Personagem
{
    public:
        Antedeguemon(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif