#include <iostream>
#include <string>
#include <vector>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "../include/PlayerController.hpp"

using namespace std;

void PlayerController::applyPlayerStats(Player& player, int index){        
    // Aqui será chamado use ability e aplicado no player
    // Pegar o elemento habilidade de player e aplicar redução de mana e efeito do player


};

void PlayerController::addPlayerStats(Player& player, PlayerController& playerController){

    //tudo que está abaixo deve ser um método de Player chamado addPlayerStats
    // esta método deve apenas chamar o addPlayerStats e enviar o player
    // devo chama-lo de initializePlayer 

    string name;
    int mana = 100;
    int hp = 100;
    int power = 2;
    int shield = 0;
    vector<Stats>& stats = player.getStats();

    cout << "Player Stats" << endl;
    cout << "Name: ";
    cin >> name;
    cout << endl;
    
    // cout << "Give Him Some Mana: ";
    // cin >> mana;
    // cout << endl;
    
    player.setName(name);

    player.setMana(mana);

    stats.resize(3); // Garante que o vetor tenha espaço suficiente para os 3 status. inicia vazio, resize aloca memória

    stats[0].setName("HP");
    stats[0].setValue(hp);

    stats[1].setName("Power");
    stats[1].setValue(power);

    stats[2].setName("Shield");
    stats[2].setValue(shield);


    // player.setHp(hp);
    // player.setPower(power);
    // player.setShield(shield);
    

    return ;
}