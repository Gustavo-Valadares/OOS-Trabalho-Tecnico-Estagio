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
        int strength;
        int shield;
        vector<Ability*> abilities; //heal, strength, shield

    public:
        Player(string name);
        ~Player();

        string getName();
        int getMana();
        int getHp();
        int getStrength();
        int getShield();
        Ability* getAbility(int index);
        vector<Ability*>& getAbilities();
        
        void setName(string name);
        void setMana(int mana);
        void setHp(int hp);
        void setStrength(int power);
        void setShield(int shield);

        void adventure();
        void applyAbilityOnPlayer(int index);
        void consumeMana(int manaCost);
        void increaseHp(int value);
        void increaseShield(int value);
        void increaseStrength(int value);
        bool isDead();
        void initializeAbilities();
        void regenerateMana();
        void updateCoolDowns();

};

#endif