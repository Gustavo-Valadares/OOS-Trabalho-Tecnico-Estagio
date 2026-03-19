#include <iostream>
#include <string>
#include "Player.hpp"
#include "Ability.hpp"
#include "PlayerController.hpp"

using namespace std;

void PlayerController::applyPlayerStats(Player& player1, int index){        
    // Aqui será chamado use ability e aplicado no player
    // Pegar o elemento habilidade de player e aplicar redução de mana e efeito do player

    //Pega a abilidade
    Ability ability = player1.getAbility(index);

    //Aplico ao player chamando o applyAbility
    player1.applyAbility(ability, index);

};

void PlayerController::addPlayerStats(Player& player, PlayerController& playerController){

    //tudo que está abaixo deve ser um método de Player chamado addPlayerStats
    // esta método deve apenas chamar o addPlayerStats e enviar o player
    // devo chama-lo de initializePlayer 

    string name;
    int mana = 100;
    int hp = 100;
    int attackPower = 2;
    int protection = 0;

    cout << "Player stats" << endl;
    cout << "Name: ";
    cin >> name;
    cout << endl;
    
    // cout << "Give Him Some Mana: ";
    // cin >> mana;
    // cout << endl;

    player.setName(name);
    player.setMana(mana);

    return ;
}