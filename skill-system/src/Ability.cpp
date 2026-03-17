#include <iostream>
#include "../include/Ability.hpp"
#include "../include/Player.hpp"

using namespace std;

bool Ability::canActivate(Player player){
    if(this->coolDownValue - this->currentCoolDown != this->coolDownValue){
        cout << "Aguarde o cooldown para usar essa habilidade";
    } else {
        activate(this, player);
    }
}

void Ability::activate(Ability ability){

}   

void Ability::updateCoolDown(Ability ability){
}