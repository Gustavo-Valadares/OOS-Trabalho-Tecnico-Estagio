#ifndef PLAYER_HPP
#define PLAYER_HPP

#pragma once

#include <string>
#include <vector>
#include "Ability.hpp"

using namespace std;

class Player {
    private:
        string name;
        int mana;
        // int hp;
        // int attackPower;
        // int protection;
        vector<int> stats; // hp, at, pt
        vector<Ability> abilities; //heal, power, shield

    public:
        int getMana();
        string getName();

        // int getHp();
        // int getAttack();
        // int getProtection();
        vector<Ability> getAbilities();
        Ability getAbility(int index);
        void setName(string name);
        void setMana(int mana);
        // void setHp(int abilityPoints);
        // void setAttackPower(int abilityPoints);
        // void setProtection(int abilityPoints);

        void addPlayerStats(Player& player);
        
        void applyAbility(Ability ability, int index);
        void consumeMana(int manaCost);
};

#endif