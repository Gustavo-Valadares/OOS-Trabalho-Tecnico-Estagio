#include <iostream>
#include <string>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "../include/Stats.hpp"
#include "../include/PlayerController.hpp"
#include "../include/AbilityController.hpp"
#include "../include/View.hpp"

using namespace std;   

string Stats::getName(){
    return this->name;
}

int Stats::getValue(){
    return this->value;
}

void Stats::setName(string name){
    this->name = name;
}

void Stats::setValue(int value){
    this->value = value;
}

void Stats::updateStats(int index, int value){
    this->value += value;
}