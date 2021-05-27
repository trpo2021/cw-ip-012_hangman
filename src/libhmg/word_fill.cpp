#include <libhmg/word_fill.h>

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int word_fill(string answer, vector<char>& found)
{
    bool f = 0;
    for (int i = 0; i < answer.size(); i++) {
        f = 0;
        for (int j = 0; j < found.size(); j++) {
            if (found.at(j) == answer.at(i)) {
                f = 1;
                break;
            }
        }
        if (f == 1)
            cout << answer.at(i) << " ";
        else
            cout << "_ ";
    }
    return 0;
}