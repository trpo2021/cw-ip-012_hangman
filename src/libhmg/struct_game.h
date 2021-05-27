#pragma once

#include <string>
#include <iostream>

using namespace std;

struct game {
    game()
    {
        Word = "NULL";
        Question = "NULL";
    }
    game(string word, string question)
    {
        this->Word = word;
        this->Question = question;
    }
    string Word;
    string Question;
};