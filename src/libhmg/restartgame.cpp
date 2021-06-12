#include <libhmg/restartgame.h>

#include <iostream>

using namespace std;

int restartgame(bool& gamestatus)
{
    char restart_choice;
    cout << "Вы хотите сыграть заново?\n1.Да\n2.Нет\n";
    cin >> restart_choice;
    if (restart_choice == '1' || restart_choice == '2') {
        switch (restart_choice) {
        case '1':
            gamestatus = true;
            return 0;
            break;
        case '2':
            gamestatus = false;
            return 0;
            break;
        default:
            gamestatus = false;
            return 0;
            break;
        }
    }
    return 2;
}