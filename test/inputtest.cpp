#include <libhmg/name_input.h>
#include <libhmg/input_validation.h>

#include <ctest.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

//setlocale(LC_ALL, "rus");

CTEST(name_inputf, right_input)
{
    int testExp = 0;
    int testResult = name_input("asd");
    ASSERT_EQUAL(testExp, testResult);
}

CTEST(name_inputf, wrong_input)
{
    int testExp = 1;
    int testResult = name_input("asde123456789");
    ASSERT_EQUAL(testExp, testResult);
}
/*CTEST(input_validationf, right_input)
{
    int testExp = 0;
    int testResult = input_validation('g');
    ASSERT_EQUAL(testExp, testResult);
}*/
CTEST(input_validationf, wrong_input)
{
    int testExp = 11;
    int testResult = input_validation('d');
    ASSERT_EQUAL(testExp, testResult);
}

