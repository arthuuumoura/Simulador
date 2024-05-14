#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Lanca.hpp"
#include "../acessorios-hpp/Muro.hpp"
#include "../acessorios-hpp/Peitoral.hpp"
#include "../acessorios-hpp/Porrete.hpp"
#include "../acessorios-hpp/Tunica.hpp"
#include "../acessorios-hpp/Capacete.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Faca.hpp"
#include "../acessorios-hpp/Vidro.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Pedinte.hpp"
#include "../personagens-hpp/Mago.hpp"
#include "../personagens-hpp/Antedeguemon.hpp"
#include "../personagens-hpp/Pokemon.hpp"
#include "../personagens-hpp/Soldado.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* Faca1  = new Faca("Faca de acougue",0,15);
    ArmaAtaque* Porretebom  = new Porrete("Cana de acucar",1,5);
    ArmaAtaque* Lanca1  = new Lanca("Lanca Chamas",0, 16);
    ArmaAtaque* Vidro1 = new Vidro("Caco de vidro",0,8);
    ArmaAtaque* Espada1  = new Espada("Espada de adamantium",5,20);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaDefesa* tunica = new Tunica("Maome", 3);
    ArmaDefesa* muro = new Muro("Muro de tijolo", 2);
    ArmaDefesa* peitoral = new Escudo("Peitoral de Ferro", 5);
    ArmaDefesa* capacete = new Capacete("Capa free fire", 1);
    
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 80, arma, escudo);
    Personagem* p2 = new Pokemon(1, "Hytmonchan", 110, Faca1, muro);
    Personagem* p3 = new Antedeguemon(1, "Antedeguemoon", 70, Lanca1, tunica);
    Personagem* p4 = new Pedinte(2, "Mendigo", 40,Vidro1, capacete);
    Personagem* p5 = new Soldado(2, "Ryan", 110, Espada1, peitoral);
    Personagem* p6 = new Mago(2, "Patolino Mago", 130, Porretebom, tunica);
    
    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 2);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}