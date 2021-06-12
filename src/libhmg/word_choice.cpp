#include <libhmg/word_choice.h>
#include <libhmg/struct_game.h>

#include <libhmg/istream_operator.h>
#include <libhmg/ostream_operator.h>
#include <libhmg/struct_game.h>

#include <fstream>
#include <string>
#include <iostream>
//#include <Windows.h>
#include <ctime>

using namespace std;

void word_choice(fstream& fin, string patch, int lines, game& word)
{
    setlocale(LC_ALL, "rus");
    int rline = 1 + rand() % lines;
    int k = 0;
    fin.open(patch);
    if (!fin.is_open()) {
        cout << "Ошибка в открытии файла " << patch << endl;
    } else {
        cout << "Файл " << patch << " открыт успешно!" << endl;
        while (!fin.eof()) {
            k++;
            //SetConsoleCP(1251);
            fin >> word;
            //SetConsoleCP(866);

            if (k == rline)
                break;
        }
    }
    fin.close();
}
