#include <libhmg/victory_check.h>

#include <string>
#include <iostream>
#include <vector>
#include <iostream>

using namespace std;

int victory_check(string answer, vector<char>& found)
{
    size_t sum_letters = 0;
    for (size_t i = 0; i < found.size(); i++) {
        for (size_t j = 0; j < answer.size(); j++) {
            if (answer.at(j) == found.at(i))
                sum_letters++;
            if (sum_letters == answer.size())
                return 123;
        }
    }
    return 0;
}