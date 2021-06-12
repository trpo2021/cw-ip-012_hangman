#pragma once

using namespace std;

inline ostream& operator<<(ostream& os, const game& point)
{
    os << point.Word << "\t" << point.Question;
    return os;
}