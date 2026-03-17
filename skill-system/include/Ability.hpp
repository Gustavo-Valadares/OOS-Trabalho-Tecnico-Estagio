#ifndef ABILITY_HPP
#define ABILITY_HPP

#pragma once

#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;

class Ability {
    private:
        string name;
        int manaCost;
        int coolDownValue;
        int currentCoolDown;

    public:
        bool canActivate(Player player);
        void activate(Player, Ability ability);
        void updateCoolDown(Ability ability);
};

#endif