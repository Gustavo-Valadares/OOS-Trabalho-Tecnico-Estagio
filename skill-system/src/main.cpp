#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"
#include "../include/Heal.hpp"
#include "../include/Strength.hpp"
#include "../include/Shield.hpp"
#include "../include/View.hpp"

using namespace std;

int main(){
    Player player("");
    View view;

    player.initializeAbilities();

    view.initialMenu();
    view.displayMenu(player);

    cout << "Game Over!" << endl;
    return 0;
}

// fazer:

// colocar funções hpp e cpp em ordem alfabética 