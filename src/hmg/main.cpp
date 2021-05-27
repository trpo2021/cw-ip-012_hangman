#include <libhmg/counting_lines.h>
#include <libhmg/drawing_man.h>
#include <libhmg/input_validation.h>
#include <libhmg/menu.h>
#include <libhmg/victory_check.h>
#include <libhmg/word_check.h>
#include <libhmg/word_choice.h>
#include <libhmg/word_fill.h>

#include <Windows.h>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct list {
    list()
    {
        Name = "NULL";
        Number = 0;
        Weight = 0;
    }
    list(string name, int number, int weight)
    {
        this->Name = name;
        this->Number = number;
        this->Weight = weight;
    }
    string Name;
    int Number;
    int Weight;
};

struct game {
    game()
    {
        Word = "NULL";
        Question = "NULL";
    }
    game(string word, string question)
    {
        this->Word = word;
        this->Question = question;
    }
    string Word;
    string Question;
};

ostream& operator<<(ostream& os, const game& point)
{
    os << point.Word << "\t" << point.Question;
    return os;
}

istream& operator>>(istream& is, game& point)
{
    is >> point.Word >> point.Question;
    return is;
}

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