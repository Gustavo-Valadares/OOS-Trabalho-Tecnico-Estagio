#ifndef PLAYERCONTROLLER_HPP
#define PLAYERCONTROLLER_HPP

#pragma once

#include <iostream>
#include "../include/Player.hpp"

using namespace std;

class PlayerController {

    public:
        void applyPlayerStats(Player player1, int index);
        void addPlayerStats(Player *player);

};

#endif