#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "../view/View.hpp"

using namespace std;

int main(){
    Player player1;
    View v;
        
    v.displayMenu(player1);

    cout << "Game Over!" << endl;
    return 0;
}


// falta fazer:
// update cooldown
// controller (check)
// relogio global de atualização 
// 