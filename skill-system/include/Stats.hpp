#ifndef STATS_HPP
#define STATS_HPP

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Stats {
    string name;
    int value;

public:
    string getName();
    int getValue();

    void setName(string name);
    void setValue(int value);

    void updateStats(int index, int value);
};

#endif
