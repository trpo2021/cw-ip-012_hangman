#include <libhmg/class_timer.h>
#include <libhmg/counting_lines.h>
#include <libhmg/drawing_man.h>
#include <libhmg/input_validation.h>
#include <libhmg/menu.h>
#include <libhmg/name_input.h>
#include <libhmg/records.h>
#include <libhmg/restartgame.h>
#include <libhmg/struct_game.h>
#include <libhmg/struct_list.h>
#include <libhmg/victory_check.h>
#include <libhmg/word_check.h>
#include <libhmg/word_choice.h>
#include <libhmg/word_fill.h>

//#include <Windows.h>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    bool gamestatus = true;
    int lines = 0;
    int life;
    int time_end;
    int time_s = 0;
    int difficulty_s;
    Timer timer;
    string patch;
    string patch_r = "highscore_table.txt";
    game word;
    list record;
    string name;
    string them;
    string answer;
    char letter;
    fstream fs;
    vector<char> found;
    vector<char> entered_letters;

    while (gamestatus) {
        srand(time(0));
        found.clear();
        entered_letters.clear();
        life = 6;
        time_end = 90;
        time_s = 0;
        lines = 0;
        do {
            system("CLS");
            cout << "Введите никнейм (12 символов, без пробелов): ";
            //SetConsoleCP(1251);
            cin >> name;
            //SetConsoleCP(866);
        } while (name_input(name) != 0);
        
        menu(patch, difficulty_s, fs, patch_r);

        counting_lines(fs, patch, lines);
        word_choice(fs, patch, lines, word);
        them = word.Question;
        answer = word.Word;
        timer.start();
        while (life > 0 && victory_check(answer, found) != 0) {
            do {
                system("CLS");
                cout << "Время:" << int(time_end - timer.elapsedSeconds()) << " секунд осталось." <<endl;
                cout << "Тема: " << them << endl;
                //cout << "Ответ: " << answer << endl; // Still test line. Delete or comment in final version
                drawing_man(life);
                cout << endl;
                word_fill(answer, found);
                cout << endl;
                if (time_end - timer.elapsedSeconds() <= 0)
                    life = 0;
                cout << endl << "Введите одну букву: ";
                //SetConsoleCP(1251);
                if (life > 0) {
                    cin >> letter;
                }
                //SetConsoleCP(866);
            } while (input_validation(letter) != 0 && life > 0);
            if (word_check(answer, letter, found, entered_letters) == 22)
                life--;
        }
        //SetConsoleCP(866);
        time_s = time_end - timer.elapsedSeconds();
        timer.stop();

        system("CLS");
        if (time_s > 0 && life > 0 && victory_check(answer, found) == 0) {
            cout << "Поздравляю!\nВаше слово:" << answer
                 << "\nВы заработали: " << time_s * difficulty_s << " очков."
                 << endl;
            record.Name = name;
            record.Score = time_s * difficulty_s;
            records(fs, patch_r, record);
        } else if (time_s <= 0 && life >= 0) {
            drawing_man(0);
            cout << "Ваше время истекло, вы проиграли!\nОтвет:" << answer << ".\n";
        } else if (time_s > 0 && life == 0){
            drawing_man(0);
            cout << "У вас закончились жизни, вы проиграли!\nОтвет:" << answer << ".\n";
        }
        while (restartgame(gamestatus) != 0) {
            system("CLS");
        }
    }
}