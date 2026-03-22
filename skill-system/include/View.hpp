#ifndef VIEW_HPP
#define VIEW_HPP

#pragma once

#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"

class View {
    public:
        void displayMenu(Player& player);
        void displayPlayerStats(Player& player);
        void displayAbilites(Player& player);
        void initialMenu();
};

#endif