#include <libhmg/input_validation.h>

#include <iostream>

using namespace std;

int input_validation(char letter)
{
    // ирилица (224-255)
    if (/*letter - 224 >= 0 && letter - 224 < 256*/
        letter == 'а' || letter == 'б' || letter == 'в' || letter == 'г'
        || letter == 'д' || letter == 'е' || letter == 'Є' || letter == 'ж'
        || letter == 'з' || letter == 'и' || letter == 'й' || letter == 'к'
        || letter == 'л' || letter == 'м' || letter == 'н' || letter == 'о'
        || letter == 'п' || letter == 'р' || letter == 'с' || letter == 'т'
        || letter == 'у' || letter == 'ф' || letter == 'х' || letter == 'ц'
        || letter == 'ч' || letter == 'ш' || letter == 'щ' || letter == 'ъ'
        || letter == 'ы' || letter == 'ь' || letter == 'э' || letter == 'ю'
        || letter == '€') {
        return 0;
    }

    // SetConsoleCP(1251);
    // for (int i = 'а'; i < 'я'; i++)
    //{
    //	if (letter == i)
    //		return 0;
    //}

    // SetConsoleCP(866);
    return 11;
}