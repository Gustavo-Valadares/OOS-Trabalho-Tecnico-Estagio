#ifndef PLAYER_HPP
#define PLAYER_HPP

#pragma once

#include <string>
#include <vector>
#include "Ability.hpp"
#include "Stats.hpp"

using namespace std;

class Player {
    private:
        string name;
        int mana;
        // int hp;
        // int power;
        // int shield;
        vector<Stats> stats; // hp, at, sh
        vector<Ability> abilities; //heal, power, protection

    public:
        int getMana();
        string getName();

        // int getHp();
        // int getPower();
        // int getShield();
        vector<Stats>& getStats();
        vector<Ability>& getAbilities();
        Stats& getStat(int index);
        Ability& getAbility(int index);
        
        void setName(string name);
        void setMana(int mana);
        // void setHp(int hp);
        // void setPower(int power);
        // void setShield(int shield);

        void regenerateMana();
        void addPlayerStats(Player& player);
        void updateCooldowns();
        void applyAbilityOnPlayer(int index);
        void consumeMana(int manaCost);
};

#endif