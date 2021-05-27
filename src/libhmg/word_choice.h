#pragma once

#include <fstream>
#include <string>
#include <libhmg/struct_game.h>

using namespace std;

void word_choice(fstream& fin, string patch, const int lines, game& word);