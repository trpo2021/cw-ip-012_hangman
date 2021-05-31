#pragma once

#include <string>
#include <iostream>

using namespace std;

struct list {
    list()
    {
        Name = "NULL";
        Score = 0;
    }
    list(string name, int score)
    {
        this->Name = name;
        this->Score = score;
    }
    string Name;
    int Score;
};