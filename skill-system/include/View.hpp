#ifndef VIEW_HPP
#define VIEW_HPP

#pragma once

#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "../include/PlayerController.hpp"

class View {
    public:
        void displayMenu(Player& player);
        void displayPlayerStats(Player& player);
        void displayAbilites(Player& player);
        void initialMenu();
        void addPlayerStatsMenu(Player& player, PlayerController& playerController);
};

#endif