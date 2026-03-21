#ifndef ABILITY_HPP
#define ABILITY_HPP

#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player;

class Ability {
    private:
        string name;
        int manaCost;
        int abilityPoints;
        int coolDownValue;
        int currentCoolDown;

    public:
        virtual void applyEffect(Player& player) = 0;
        virtual ~Ability() = default;

        string getName();
        int getManaCost();
        int getAbilityPoints();
        int getCoolDown();
        int getCoolDownValue();

        void setName(string abilityName);
        void setManaCost(int manaCost);
        void setAbilityPoints(int abilityPoints);
        void setCoolDown(int currentCoolDown);
        void setCoolDownValue(int coolDownValue);
        
        bool canActivate(Player& player);
        void activate(Player& player);
};

#endif