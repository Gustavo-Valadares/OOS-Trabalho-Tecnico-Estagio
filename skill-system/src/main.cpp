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
    vector<Ability*>& abilities = player.getAbilities();
    View view;

    player.initializeAbilities();
    
    abilities.push_back(new Heal());
    abilities.push_back(new Strength());
    abilities.push_back(new Shield());

    view.initialMenu();
    view.displayMenu(player);

    cout << "Game Over!" << endl;
    return 0;
}


// falta fazer:

// Mudar nome strenght pra strength
// criar desctrutors
// remover controllers 

// Criar Read.me

// criar uml

// refactor de View
