#include <libhmg/menu.h>

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int menu(string& patch, int& difficulty_s, fstream& fs, string patch_r)
{
    char choice;
    while (choice != '1' || choice != '2' || choice != '3') {
        system("CLS");
        cout << "Выберите уровень сложности: "
                "\n1.Легкая\n2.Средняя\n3.Высокая\n4.Таблица рекрдов (10 "
                "первых мест)\n";
        cin >> choice;
        if (choice == '1' || choice == '2' || choice == '3' || choice == '4') {
            switch (choice) {
            case '1':
                patch = "difficulties/easy.txt";
                difficulty_s = 5;
                return 0;
                break;
            case '2':
                patch = "difficulties/medium.txt";
                difficulty_s = 10;
                return 0;
                break;
            case '3':
                patch = "difficulties/hard.txt";
                difficulty_s = 15;
                return 0;
                break;
            case '4':
                system("CLS");
                fs.open(patch_r, fstream::in | fstream::out);
                if (!fs.is_open()) {
                    return 4;
                } else {
                    string str;
                    int k = 1;
                    while (!fs.eof()) {
                        str = "";
                        getline(fs, str);
                        cout << k << ". " << str << endl;
                        k++;
                        if (k > 10)
                            break;
                    }
                    cout << "Для выбора сложности нажите Enter." << endl;
                    system("pause");
                }
                fs.close();
                break;
            default:
                patch = "difficulties/easy.txt";
                difficulty_s = 5;
                return 0;
                break;
            }
        }
    }
    return 11;
}