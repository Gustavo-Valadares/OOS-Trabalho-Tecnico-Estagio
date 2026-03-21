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
        int hp;
        int strenght;
        int shield;
        // vector<Stats> stats; // hp, at, sh
        vector<Ability*> abilities; //heal, power, protection

    public:
        int getMana();
        string getName();

        int getHp();
        int getStrenght();
        int getShield();
        // vector<Stats>& getStats();
        vector<Ability*>& getAbilities();
        // Stats& getStat(int index);
        Ability* getAbility(int index);
        
        void setName(string name);
        void setMana(int mana);
        void setHp(int hp);
        void setStrenght(int power);
        void setShield(int shield);

        void increaseHp(int value);
        void increaseShield(int value);
        void increaseStrength(int value);
        void regenerateMana();
        void addPlayerStats(Player& player);
        void updateCooldowns();
        void applyAbilityOnPlayer(int index);
        void consumeMana(int manaCost);
};

#endif