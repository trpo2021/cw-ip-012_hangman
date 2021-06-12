#include <libhmg/victory_check.h>
#include <libhmg/word_check.h>

#include <ctest.h>
#include <string>
#include <vector>
#include <iostream>

CTEST(victory_checkf, right_input)
{
    vector<char> found = {'h', 'l', 'e', 'o'};
    string answer = "hello";
    int testExp = 0;
    int testResult = victory_check(answer, found);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(victory_checkf, wrong_input)
{
    vector<char> found = {'e', 'o'};
    string answer = "error";
    int testExp = 1;
    int testResult = victory_check(answer,found);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(word_checkf, right)
{
    string answer = "word";
    char letter = 'o';
    vector<char> found;
    vector<char> entered_letters;
    int testExp = 0;
    int testResult = word_check(answer, letter, found, entered_letters);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(word_checkf, right_found)
{
    string answer = "word";
    char letter = 'o';
    vector<char> found = {'o'};
    vector<char> entered_letters;
    int testExp = 11;
    int testResult = word_check(answer, letter, found, entered_letters);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(word_checkf, wrong)
{
    string answer = "word";
    char letter = 'a';
    vector<char> found;
    vector<char> entered_letters;
    int testExp = 22;
    int testResult = word_check(answer, letter, found, entered_letters);
    ASSERT_EQUAL(testExp, testResult);
}

