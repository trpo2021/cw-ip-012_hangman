#include <libhmg/name_input.h>
#include <libhmg/input_validation.h>
#include <libhmg/victory_check.h>

#include <ctest.h>
#include <string>
#include <vector>

using namespace std;

CTEST(name_inputf, right_input)
{
    int testExp = 0;
    int testResult = name_input("Сергей");
    ASSERT_EQUAL(testExp, testResult);
}

CTEST(name_inputf, wrong_input)
{
    int testExp = 1;
    int testResult = name_input("Сергей1234567");
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(input_validationf, right_input)
{
    int testExp = 0;
    int testResult = input_validation('й');
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(input_validationf, wrong_input)
{
    int testExp = 11;
    int testResult = input_validation('g');
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(victory_checkf, right_input)
{
    vector<char> found = {'п', 'р', 'в', 'и','т','е'};
    string answer = "привет";
    int testExp = 0;
    int testResult = victory_check(answer, found);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(victory_checkf, wrong_input)
{
    vector<char> found = {'п', 'р', 'в', 'и'};
    string answer = "привет";
    int testExp = 1;
    int testResult = victory_check(answer,found);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(victory_checkf, right_input)
{
    vector<char> found = {'м', 'о', 'л','к'};
    string answer = "молоко";
    int testExp = 0;
    int testResult = victory_check(answer, found);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(victory_checkf, wrong_input)
{
    vector<char> found = {'м', 'о', 'л'};
    string answer = "молоко";
    int testExp = 1;
    int testResult = victory_check(answer, found);
    ASSERT_EQUAL(testExp, testResult);
}
