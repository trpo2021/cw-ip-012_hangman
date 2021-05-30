#pragma once

using namespace std;

inline istream& operator>>(istream& is, list& point)
{
	is >> point.Name >>  point.Score;
	return is;
}