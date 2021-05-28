#include <libhmg/counting_lines.h>
#include <libhmg/drawing_man.h>
#include <libhmg/input_validation.h>
#include <libhmg/menu.h>
#include <libhmg/victory_check.h>
#include <libhmg/word_check.h>
#include <libhmg/word_choice.h>
#include <libhmg/word_fill.h>
#include <libhmg/struct_game.h>
#include <libhmg/struct_list.h>

#include <Windows.h>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int lines = 0;
    int life = 6;
    string patch;
    game word;
    string them;
    string answer;
    char letter;
    fstream fs;
    vector<char> found;

    do {
        system("CLS");
    } while (menu(patch) != 0);

    counting_lines(fs, patch, lines);
    word_choice(fs, patch, lines, word);
    them = word.Question;
    answer = word.Word;
    while (life > 0 && victory_check(answer, found) != 123) {
        do {
            system("CLS");
            cout << "Тема: " << them << endl;
            cout << answer << endl;
            drawing_man(life);
            cout << endl;
            word_fill(answer, found);
            cout << endl;
            cout << victory_check(answer, found);
            cout << endl << "Введите одну букву: ";
            SetConsoleCP(1251);
            cin >> letter;
            SetConsoleCP(866);
        } while (input_validation(letter) != 0);
        if (word_check(answer, letter, found) == 22)
            life--;
    }
    system("CLS");
    drawing_man(life);
    cout << "Ответ: " << answer << endl;
}