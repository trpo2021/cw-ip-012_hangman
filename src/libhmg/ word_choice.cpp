#include <libhmg/word_choice.h>

#include <fstream>
#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

void word_choice(fstream& fin, string patch, const int lines, game& word)
{
    int rline = 1 + rand() % lines;
    int k = 0;
    fin.open(patch);
    if (!fin.is_open()) {
        cout << "Ошибка в открытии файла " << patch << endl;
    } else {
        cout << "Файл " << patch << " открыт успешно!" << endl;
        while (!fin.eof()) {
            k++;
            SetConsoleCP(1251);
            fin >> word;
            SetConsoleCP(866);

            if (k == rline)
                break;
        }
    }
    fin.close();
}