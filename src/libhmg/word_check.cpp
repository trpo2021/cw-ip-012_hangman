#include <libhmg/word_check.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int word_check(string answer, char letter, vector<char>& found)
{
    for (char i : found)
        if (letter == i)
            return 11;
    for (int i = 0; i < answer.size(); i++) {
        if (letter == answer.at(i)) {
            found.push_back(letter);
            return 0;
        }
    }
    return 22;
}