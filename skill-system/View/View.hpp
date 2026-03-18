#ifndef VIEW_HPP
#define VIEW_HPP

#pragma once

#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"

using namespace std;

class View {
    public:
        void displayMenu(Player Player);
        void displayPlayerStats(Player player);
        void displayAbilites(Player player);
};

#endif