#ifndef PLAYER_HPP
#define PLAYER_HPP

#pragma once

#include <string>
#include <vector>
#include "Ability.hpp"

using namespace std;

class Player {
    private:
        std::string name;
        int hp;
        int mana;
        int protection;
        vector<Ability> abilities;

    public:
        int getMana();
        int getHp();
        int getProtection();
        void useAbility(Ability ability);
        void consumeMana(int manaCost);
};

#endif