#include <iostream>
#include <vector>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "../include/View.hpp"

using namespace std;

void View::initialMenu(){
        cout << "========================================" << endl;
        cout << "     WELCOME TO THE RPG GAME SYSTEM     " << endl;
        cout << "========================================" << endl;

        return ;
}

void View::displayMenu(Player& player){
    int command;
    
    while(1){
        if(player.isDead()){
            cout << "You Died" << endl << endl;
            return ;
        }

        cout << "========================================" << endl;
        cout << "           RPG SKILL SYSTEM             " << endl;
        cout << "========================================" << endl;
        cout << " [1] Player Stats                       " << endl;
        cout << " [2] Use Ability                        " << endl;
        cout << " [3] Rest (Regenerate Mana)             " << endl;
        cout << " [4] Adventure                          " << endl;
        cout << " [0] Exit                               " << endl;
        cout << "----------------------------------------" << endl;

        cout << "Type Your Command: ";
        cin >> command;
        cout << endl;

        switch(command){
            case 1:
                displayPlayerStats(player);
                player.updateCooldowns();
                
                break;

            case 2:
                displayAbilites(player);
                player.updateCooldowns();
                
                break;
            
            case 3:
                if(player.getMana() < 100){
                    player.regenerateMana();
                    for(int i = 0; i < 2; i++) player.updateCooldowns();
                } else {
                    cout << "You Already have maximum Mana" << endl;
                }

                break;

            case 4:
                player.adventure();
                player.updateCooldowns();

                break;

            case 0:
                return;

            default:
                cout << "Please, type a valid command" << endl;
                
                break;
        }    
    }    
}

void View::displayPlayerStats(Player& player){
    cout << "Player: " << player.getName() << endl;
    cout << "HP: " << player.getHp() << endl;
    cout << "Mana: " << player.getMana() << endl;
    cout << "Strength: " << player.getStrength() << endl;
    cout << "Shield: " << player.getShield() << endl << endl;

    return ;
}

void View::displayAbilites(Player& player){
    int command;
    vector<Ability*> abilities = player.getAbilities();

    cout << "Abilities: " << endl;
    cout << "========================================" << endl;
    cout << "| [1] " << abilities[0]->getName(); cout << " ";
    cout << "| [2] " << abilities[1]->getName(); cout << " ";
    cout << "| [3] " << abilities[2]->getName(); cout << " ";
    cout << "|" << endl;
    cout << "========================================" << endl;
    cout << " [0] Exit" << endl;


    while(1){
        cout << "Type Your Command: ";
        cin >> command;
        cout << endl;

        switch (command){
            case 1:
                if(player.getHp() < 100){
                    player.applyAbilityOnPlayer(command-1);
                } else {
                    cout << "You Already have maximum HP" << endl;
                }

                player.updateCooldowns();
                
                break;

            case 2:
                player.applyAbilityOnPlayer(command-1);
                player.updateCooldowns();
                
                break;
            
            case 3:
                if(player.getShield() < 100){
                    player.applyAbilityOnPlayer(command-1);
                } else {
                    cout << "You Already have maximum Shield" << endl;
                }
                
                player.updateCooldowns();
                
                break;
            
            case 0:
                player.updateCooldowns();
                return ;

            default:
                cout << "Please, type a valid command" << endl;
                
                break;
        }
    }
}
