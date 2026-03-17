#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"

using namespace std;

bool Ability::canActivate(){
    if(this->currentCoolDown > 0){
        cout << "Aguarde o cooldown para usar essa habilidade";
        return false;
    }
    return true;
}

// void Ability::activate(Player player){
//     if (canActivate){
        
//     }
// }   

void Ability::updateCoolDown(int coolDownValue){
    this->currentCoolDown += coolDownValue;
    // acrescentar decremento do coolDown

}