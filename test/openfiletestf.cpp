#include <libhmg/counting_lines.h>
#include <libhmg/records.h>
#include <libhmg/struct_game.h>
#include <libhmg/istream_operator.h>
#include <libhmg/ostream_operator.h>
#include <libhmg/struct_list.h>

#include <ctest.h>
#include <fstream>
#include <string>
#include <iostream>

CTEST(counting_linesf, right)
{
    fstream fin;
    int lines = 0;
    string patch = "test/difficulties/easy.txt";
    int testExp = 0;
    int testResult = counting_lines (fin, patch, lines);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(counting_linesf, wrong)
{
    fstream fin;
    int lines = 0;
    string patch = "bin/file";
    int testExp = 1;
    int testResult = counting_lines (fin, patch, lines);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(recordsf, right)
{
    fstream fin;
    list record_now;
    string patch = "test/highscore_table.txt";
    int testExp = 0;
    int testResult = records (fin, patch, record_now);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(recordsf, create_new_file)
{
    fstream fin;
    list record_now;
    string patch = "test/highscore.txt";
    int testExp = 0;
    int testResult = records (fin, patch, record_now);
    ASSERT_EQUAL(testExp, testResult);
}
