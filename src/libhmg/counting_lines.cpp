#include <libhmg/counting_lines.h>

#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void counting_lines(fstream& fin, string patch, int& lines)
{
    game word;
    fin.open(patch);

    if (!fin.is_open()) {
        cout << "Ошибка в открытии файла " << patch << endl;
    } else {
        //Получение количества строк
        cout << "Файл " << patch << " открыт успешно!" << endl;
        while (!fin.eof()) {
            lines++;
            SetConsoleCP(1251);
            fin >> word;
            SetConsoleCP(866);
        }
    }
    fin.close();
}