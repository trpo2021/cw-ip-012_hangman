#pragma once

using namespace std;

ostream& operator<<(ostream& os, const list& point)
{
    os << point.Name << "\t" << point.Number << "\t" << point.Weight;
    return os;
}