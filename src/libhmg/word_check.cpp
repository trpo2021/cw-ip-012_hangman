#include <libhmg/word_check.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int word_check(
        string answer,
        char letter,
        vector<char>& found,
        vector<char>& entered_letters)
{
    bool flag = 0;
    for (char i : found)
        if (letter == i)
            flag = 1;
    for (char i : entered_letters)
        if (letter == i)
            flag = 1;
    if (flag == 0) {
        entered_letters.push_back(letter);
    } else
        return 0;
    for (size_t i = 0; i < answer.size(); i++) {
        if (letter == answer.at(i)) {
            found.push_back(letter);
            return 0;
        }
    }
    return 22;
}