#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "view.hpp"

using namespace std;

void view(Player p1, vector<Ability> abilities){
    int command;
    
    displayMenu();
    
    cin >> command;

    while(1){
        switch(command){
            case 1:
                displayPlayerStats(p1);
                break;

            case 2:
                abilitesMenu(abilities);
                break;
            
            case 3:
        }    
    }    
}

void displayMenu(){
    cout << "========================================" << endl;
    cout << "           RPG SKILL SYSTEM             " << endl;
    cout << "========================================" << endl;
    cout << " [1] Player Stats                       " << endl;
    cout << " [2] Use Hability                       " << endl;
    cout << " [3] Rest (Regenerate Mana)             " << endl;
    cout << " [0] Exit                               " << endl;
    cout << "----------------------------------------" << endl;
}


void displayPlayerStats(Player player){
    cout << "Player: " << player.getName() << endl;
    cout << "Mana: " << player.getMana() << endl << endl;

}

void abilitesMenu(vector<Ability> abilities){
    cout << "Abilities: " << endl;
    cout << "========================================" << endl;
    cout << "| [1] Fireball   [2] Heal   [3] Shield |                               " << endl;
    cout << "========================================" << endl;

}

