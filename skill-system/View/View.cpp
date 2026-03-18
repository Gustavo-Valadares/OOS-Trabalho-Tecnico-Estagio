#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "View.hpp"

using namespace std;

void View::displayMenu(Player p1){
    int command;

    cout << "========================================" << endl;
    cout << "           RPG SKILL SYSTEM             " << endl;
    cout << "========================================" << endl;
    cout << " [1] Player Stats                       " << endl;
    cout << " [2] Use Hability                       " << endl;
//  cout << " [3] Rest (Regenerate Mana)             " << endl;
    cout << " [0] Exit                               " << endl;
    cout << "----------------------------------------" << endl;
    
    cout << "Type Your Command: ";
    cin >> command;

    while(1){
        switch(command){
            case 1:
                displayPlayerStats(p1);
                break;

            case 2:
                displayAbilites(p1);
                break;
            
            case 3:
                //ainda não implementado
                break;

            case 0:
                return;

            default:
                cout << "Please, type a valid command" << endl;
                break;
        }    
    }    
}

void View::displayPlayerStats(Player player){
    cout << "Player: " << player.getName() << endl;
    cout << "Mana: " << player.getMana() << endl << endl;

}

void View::displayAbilites(Player player){
    int command;

    cout << "Abilities: " << endl;
    cout << "========================================" << endl;
    cout << "| [1] Fireball   [2] Heal   [3] Shield |                               " << endl;
    cout << "========================================" << endl;
    cout << " [0] Exit" << endl;

    switch (command){
        case 1:
            //chama o controller que atualiza os stats do player, manda o index 0
            break;

        case 2:
            //chama o controller que atualiza os stats do player, manda o index 1
            break;
        
        case 3:
            //chama o controller que atualiza os stats do player, manda o index 2
            break;
        
        case 0:
            return ;

        default:
            cout << "Please, type a valid command" << endl;
            break;
    }
}

