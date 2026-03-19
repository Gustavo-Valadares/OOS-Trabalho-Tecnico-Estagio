#ifndef VIEW_HPP
#define VIEW_HPP

#pragma once

#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "../controllers/PlayerController.hpp"

using namespace std;

class View {
    public:
        void displayMenu(Player Player);
        void displayPlayerStats(Player player);
        void displayAbilites(Player player);
        void initialMenu(Player player, PlayerController playerController);
        void addPlayerStatsMenu(Player player, PlayerController playerController);
};

#endif