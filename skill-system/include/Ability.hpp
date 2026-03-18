#ifndef ABILITY_HPP
#define ABILITY_HPP

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Ability {
    private:
        string name;
        int manaCost;
        int abilityPoints;
        int coolDownValue;
        int currentCoolDown;

    public:
        string getName();

        int getManaCost();
        int getAbilityPoints();
        int getCoolDownValue();
        int getCurrentCoolDown();

        string setName();
        void setAbilityPoints();
        void setCoolDownValue();
        void setManaCost();
        void setCurrentCoolDown();
        
        bool canActivate();
        // void activate(Player player);
        void updateCoolDown(int coolDownValue);
};

#endif