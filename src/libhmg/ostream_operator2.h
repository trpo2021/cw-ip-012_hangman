#pragma once

using namespace std;

inline ostream& operator<<(ostream& os, const list& point)
{
    os << point.Name << "\t" << point.Score;
    return os;
}