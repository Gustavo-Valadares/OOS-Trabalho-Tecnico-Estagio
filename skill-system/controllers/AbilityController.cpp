#include <iostream>
#include <vector>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"
#include "../include/AbilityController.hpp"

using namespace std;

void AbilityController::addAbilitiesStats(Player& player, AbilityController& abilityController){
    vector<Ability>& Abilities = player.getAbilities();

    Abilities.resize(3); // Ensure the vector is large enough before indexing

    //na verdade devo pegar colocar o que está abaixo deve ser um método da função Ability 
    // esse método deve apenas chamar o método de habilites enviando o vetor de habilidades
    // mudar o nome para initializeAbilities e criar método addAbiliitesStats em Ability

    Abilities[0].setName("Heal");
    Abilities[0].setManaCost(10);
    Abilities[0].setAbilityPoints(10);

    Abilities[1].setName("Strenght");
    Abilities[1].setManaCost(20);
    Abilities[1].setAbilityPoints(2);

    Abilities[2].setName("Shiled");
    Abilities[2].setManaCost(5);
    Abilities[2].setAbilityPoints(10);

}
    
    
