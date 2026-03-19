#include <iostream>
#include <string>
#include "Player.hpp"
#include "Ability.hpp"
#include "PlayerController.hpp"

using namespace std;

void PlayerController::applyPlayerStats(Player player1, int index){        
    // Aqui será chamado use ability e aplicado no player
    // Pegar o elemento habilidade de player e aplicar redução de mana e efeito do player

    //Pega a abilidade
    Ability ability = player1.getAbility(index);

    //Aplico ao player chamando o applyAbility
    player1.applyAbility(ability, index);

};

void PlayerController::addPlayerStats(Player *player){
    string name;
    int mana = 100;
    cout << "Player stats" << endl;
    cout << "Name: ";
    cin >> name;
    cout << endl;
    
    // cout << "Give Him Some Mana: ";
    // cin >> mana;
    // cout << endl;

    player->setName(name);
    player->setMana(mana);

    return ;
}