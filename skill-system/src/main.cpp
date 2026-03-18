#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "../View/View.hpp"

using namespace std;

int main(){
    Player p1;
    View v;
        
    v.displayMenu(p1);
}


// falta fazer:
// update cooldown
// controller 
// relogio global de atualização 
// 