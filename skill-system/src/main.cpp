#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"
#include "../include/PlayerController.hpp"
#include "../include/AbilityController.hpp"
#include "../include/View.hpp"

using namespace std;

int main(){
    PlayerController playerController;
    AbilityController abilityController;
    Player player;
    View v;

    v.initialMenu();
    playerController.addPlayerStats(player, playerController);
    abilityController.addAbilitiesStats(player, abilityController);
    

    v.displayMenu(player);

    cout << "Game Over!" << endl;
    return 0;
}


// falta fazer:
// relogio global de atualização
// update cooldown
// refactor de AbilityController
// refactor de PlayerController
// refacrtor de View