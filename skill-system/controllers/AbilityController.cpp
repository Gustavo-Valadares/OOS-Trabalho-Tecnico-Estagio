#include <iostream>
#include <vector>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"
#include "../include/AbilityController.hpp"
#include "../include/Heal.hpp"
#include "../include/Shield.hpp"
#include "../include/Strength.hpp"

using namespace std;

void AbilityController::addAbilitiesStats(Player& player, AbilityController& abilityController){
    vector<Ability*>& abilities = player.getAbilities();

    abilities.push_back(new Heal());
    abilities.push_back(new Strength());
    abilities.push_back(new Shield());

}
    
    
