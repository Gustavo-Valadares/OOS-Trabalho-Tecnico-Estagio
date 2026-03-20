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
    View view;

    view.initialMenu();
    playerController.addPlayerStats(player, playerController);      //Carrega o nome, mana, hp, força, e proteção inicial do jogador
    abilityController.addAbilitiesStats(player, abilityController); //Carrega o nome, pontos e cooldown de cada habilidade
    
    view.displayMenu(player);

    cout << "Game Over!" << endl;
    return 0;
}


// falta fazer:
// update cooldown
// aplicar efeitos no persongem 
// can activate não está funcionando 

// refactor de AbilityController
// refactor de PlayerController
// refacrtor de View

//se der:
//mana regen