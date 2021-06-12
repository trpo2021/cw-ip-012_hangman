#pragma once

using namespace std;

inline istream& operator>>(istream& is, game& point)
{
    is >> point.Word >> point.Question;
    return is;
}