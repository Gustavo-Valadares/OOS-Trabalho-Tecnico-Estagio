#ifndef PLAYER_HPP
#define PLAYER_HPP

#pragma once

#include <string>
#include <vector>
#include "Ability.hpp"
#include "Player.hpp"

using namespace std;

class Player {
    private:
        string name;
        int mana;
        // int hp;
        // int attack;
        // int protection;
        vector<int> stats; // hp, at, pt
        vector<Ability> abilities; //heal, fireball, shield

    public:
        int getMana();
        // int getHp();
        // int getAttack();
        // int getProtection();
        Ability getAbility(int index);
        string setName();
        void setMana();
        void setHp();
        void setAttack();
        void setProtection();
        
        void useAbility(Ability ability, int index);
        void consumeMana(int manaCost);
};

#endif