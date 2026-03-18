#ifndef VIEW_HPP
#define VIEW_HPP

#pragma once

#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"

using namespace std;

class View {
    public:
        void displayMenu(Player p1, vector<Ability> abilities);
        void displayPlayerStats(Player player);
        void abilitiesMenu(vector<Ability> abilities);
        void displayAbilites(vector<Ability> abilities);
        
};

#endif