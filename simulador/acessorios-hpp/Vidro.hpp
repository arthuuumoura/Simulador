#ifndef VIDRO
#define VIDRO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Vidro : public ArmaAtaque
{
    public:
        Vidro(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif