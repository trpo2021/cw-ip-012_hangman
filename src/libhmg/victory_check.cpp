#include <libhmg/victory_check.h>

#include <string>
#include <iostream>
#include <vector>

using namespace std;

int victory_check(string answer, vector<char>& found)
{
    int sum_letters = 0;
    for (int i = 0; i < found.size(); i++) {
        for (int j = 0; j < answer.size(); j++) {
            if (answer.at(j) == found.at(i))
                sum_letters++;
            if (sum_letters == answer.size())
                return 123;
        }
    }
    return sum_letters;
}