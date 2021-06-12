#include <libhmg/counting_lines.h>
#include <libhmg/struct_game.h>
#include <libhmg/istream_operator.h>
#include <libhmg/ostream_operator.h>

#include <fstream>
#include <string>
#include <iostream>
//#include <Windows.h>

using namespace std;

int counting_lines(fstream& fin, string patch, int& lines)
{
    game word;
    fin.open(patch);

    if (!fin.is_open()) {
        return 1;
    } else {
        //Получение количества строк
        while (!fin.eof()) {
            lines++;
            //SetConsoleCP(1251);
            fin >> word;
            //SetConsoleCP(866);
        }
    }
    fin.close();
    return 0;
}
