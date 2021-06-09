#include <libhmg/records.h>
#include <libhmg/istream_operator2.h>
#include <libhmg/ostream_operator2.h>
#include <libhmg/struct_list.h>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//#include <Windows.h>
#include <algorithm>

using namespace std;

int records(fstream& fs, string patch, list& record_now)
{
    setlocale(LC_ALL, "rus");
    bool flag = 0;
    list record;
    vector<list> lines;
    //SetConsoleCP(1251);
    fs.open(patch, fstream::in | fstream::out | fstream::app);
    if (!fs.is_open()) {
        cout << "Ошибка открытия файла " << endl;
        return 1;
    } else {
        int k = 0;
        while (!fs.eof()) {
            k++;
            fs >> record;
            if (record_now.Score > record.Score || k == 10) {
                flag = 1;
                fs.close();
                break;
            }
        }
        if (flag == 1) {
            fs.open(patch, fstream::in | fstream::out | fstream::app);
            fs << endl << record_now;
            fs.close();
            fs.open(patch, fstream::in | fstream::out);
            while (!fs.eof()) {
                fs >> record;
                lines.push_back(record);
            }
            sort(lines.begin(),
                 lines.end(),
                 [](const list& p1, const list& p2) {
                     return p1.Score > p2.Score;
                });
            fs.close();
            fs.open(patch, fstream::out);
            for (size_t i = 0; i < 10 && i < lines.size(); i++) {
                fs << lines.at(i) << endl;
            }
            fs.close();
        }
    }
    //SetConsoleCP(866);
    return 0;
}