#include <iostream>
#include <string>
#include <vector>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "../include/PlayerController.hpp"

using namespace std;

void PlayerController::addPlayerStats(Player& player, PlayerController& playerController){

    string name;
    int mana = 100;
    int hp = 100;
    int strenght = 2;
    int shield = 0;

    cout << "Name Your Player" << endl;
    cout << "Name: ";
    cin >> name;
    cout << endl;
    
    player.setName(name);
    player.setMana(mana);
    player.setHp(hp);
    player.setStrenght(strenght);
    player.setShield(shield);
    

    return ;
}