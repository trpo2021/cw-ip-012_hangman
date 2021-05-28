#pragma once

using namespace std;

 istream& operator>>(istream& is, list& point)
{
	is >> point.Name >> point.Number >> point.Weight;
	return is;
}