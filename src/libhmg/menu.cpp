#include <libhmg/menu.h>

#include <iostream>
#include <string>

using namespace std;

int menu(string& patch)
{
    char choice;
    cout << "Выберите уровень сложности: \n1.easy\n2.medium\n3.hard\n";
    cin >> choice;
    if (choice == '1' || choice == '2' || choice == '3') {
        switch (choice) {
        case '1':
            patch = "difficulties/easy.txt";
            return 0;
            break;
        case '2':
            patch = "difficulties/medium.txt";
            return 0;
            break;
        case '3':
            patch = "difficulties/hard.txt";
            return 0;
            break;
        default:
            patch = "difficulties/easy.txt";
            return 11;
            break;
        }
    }
    return 1;
}