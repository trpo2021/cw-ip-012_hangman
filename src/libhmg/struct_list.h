#pragma once

#include <string>
#include <iostream>

using namespace std;

struct list {
    list()
    {
        Name = "NULL";
        Number = 0;
        Weight = 0;
    }
    list(string name, int number, int weight)
    {
        this->Name = name;
        this->Number = number;
        this->Weight = weight;
    }
    string Name;
    int Number;
    int Weight;
};