#ifndef ABILITY_HPP
#define ABILITY_HPP

#pragma once

#include <iostream>
#include <string>
#include <vector>

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
        int getCoolDown();
        int getCoolDownValue();

        void setName(string abilityName);
        void setAbilityPoints(int abilityPoints);
        void setCoolDown(int currentCoolDown);
        void setCoolDownValue(int coolDownValue);
        
        void setManaCost(int manaCost);
        
        bool canActivate();
        // void activate(Player player);
        void applyCoolDown(Ability& ability);
        // void updateCoolDown(vector<Ability>& abilities);
};

#endif