#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "../controllers/PlayerController.hpp"
#include "../controllers/AbilityController.hpp"
#include "../view/View.hpp"

using namespace std;

int main(){
    PlayerController playerController;
    AbilityController abilityController;
    Player player;
    View v;

    v.initialMenu(player, playerController);
    playerController.addPlayerStats(player);
    abilityController.addAbilitiesStats(player, abilityController);
    

    v.displayMenu(player);

    cout << "Game Over!" << endl;
    return 0;
}


// falta fazer:
// relogio global de atualização
// update cooldown
