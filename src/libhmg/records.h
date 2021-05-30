#pragma once

#include <libhmg/struct_list.h>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>
#include <algorithm>

using namespace std;

int records(fstream& fs, string patch, list& record_now);