#include <libhmg/name_input.h>
#include <string>

int name_input(std::string name)
{
    if (name.size() <= 12) {
        if (name.find(' ') == std::string::npos)
            return 0;
    }
    return 1;
}