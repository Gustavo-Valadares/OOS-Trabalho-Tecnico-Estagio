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

    view.initialMenu();
    view.displayMenu(player);

    cout << "Game Over!" << endl;
    return 0;
}


// falta fazer:

// Criar Read.me

// criar uml

// olhar a possibilidade de criação de uma gameplay simples ✓
// limitar mana e hp ✓


// caso ganhe a luta: + força ✓
// caso perca: -hp, -shield ✓
// balancear o dano com o shield ✓
// aumentar cooldown da habilidades 
// hp = 0 -> game over 
// todo inimigo vai dar 2*difficuldade de dano. esses pontos devem ser tirado primeiro do shield depois da vida do player

// refactor de View


/*

void Player::adventure(){
    int difficulty = rand() % 20 + 5;

    cout << "You encountered an enemy!" << endl;
    cout << "Enemy difficulty: " << difficulty << endl;

    if(this->getStrenght() >= difficulty){
        cout << "You won the fight!" << endl;

        this->increaseStrength(2);
        this->increaseHp(5);

        cout << "You feel stronger." << endl;
    } else {
        cout << "You lost the fight..." << endl;

        this->setHp(this->getHp() - 10);
    }
}

*/