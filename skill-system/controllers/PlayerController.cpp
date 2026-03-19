#include <iostream>
#include "Player.hpp"
#include "Ability.hpp"
#include "PlayerController.hpp"

using namespace std;

void playerController::applyPlayerStats(Player player1, int index){        
    // Aqui será chamado use ability e aplicado no player
    // Pegar o elemento habilidade de player e aplicar redução de mana e efeito do player

    //Pego a abilidade
    Ability ability = player1.getAbility(index);

    //Aplico ao player chamando o applyAbility
    player1.applyAbility(ability, index);

};