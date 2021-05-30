#include <libhmg/drawing_man.h>

#include <iostream>

using namespace std;

void drawing_man(int life)
{
    switch (life) {
    case 6:
        cout << "                     *\n";
        cout << "            *\n";
        cout << "\n";
        cout << "                        *\n";
        cout << "\n";
        cout << "     *\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                    #\n";
        cout << "\n";
        cout << "       *\n";
        cout << "\n";
        cout << "רררררררררררררררררררררררררררר\n"; // 28 "ר"
        break;
    case 5:
        cout << "                    *\n";
        cout << "\n";
        cout << "\n";
        cout << "           *\n";
        cout << "\n";
        cout << "    *\n";
        cout << "\n";
        cout << "                        *\n";
        cout << "            ====            \n";
        cout << "            /  \\           \n";
        cout << "           /    \\          \n";
        cout << "        ooo      ooo        \n";
        cout << "                            \n";
        cout << "רררררררררררררררררררררררררררר\n"; // 28 "ר"
        break;
    case 4:
        cout << "\n";
        cout << "                      *\n";
        cout << "\n";
        cout << "   *\n";
        cout << "\n";
        cout << "           q____p\n";
        cout << "          /  ||  \\         \n";
        cout << "         /   ||   \\        \n";
        cout << "            ====            \n";
        cout << "     *      /  \\           \n";
        cout << "           /    \\      *   \n";
        cout << "        ooo      ooo        \n";
        cout << "                            \n";
        cout << "רררררררררררררררררררררררררררר\n"; // 28 "ר"
        break;
    case 3:
        cout << "                    *\n";
        cout << "\n";
        cout << "           ֶֶֶֶֶֶ           \n";
        cout << "           |o  o|     *     \n";
        cout << "           |_ B_|           \n";
        cout << "           q_||_p           \n";
        cout << "          /  ||  \\         \n";
        cout << "         /   ||   \\        \n";
        cout << "  *         ====            \n";
        cout << "            /  \\           \n";
        cout << "           /    \\     #    \n";
        cout << "        ooo      ooo        \n";
        cout << "                            \n";
        cout << "רררררררררררררררררררררררררררר\n"; // 28 "ר"
        break;
    case 2:
        cout << "\n";
        cout << "\n";
        cout << "        *  ֶֶֶֶֶֶ           \n";
        cout << "           |-  -|           \n";
        cout << "           |_ ג_|      *    \n";
        cout << "           q_||_p           \n";
        cout << "          /  ||  \\         \n";
        cout << "   #     /   ||   \\        \n";
        cout << "            ====            \n";
        cout << "            /  \\           \n";
        cout << "           /    \\          \n";
        cout << "        ooo      ooo   *    \n";
        cout << "                            \n";
        cout << "רררררררררררררררררררררררררררר\n"; // 28 "ר"
        break;
    case 1:
        cout << "              *             \n";
        cout << " || /                       \n";
        cout << " ||/       ֶֶֶֶֶֶ           \n";
        cout << " ||        |Ù  Ù|     *     \n";
        cout << " ||        |_ Û_|           \n";
        cout << " ||        q_||_p           \n";
        cout << " ||  *    /  ||  \\         \n";
        cout << " ||      /   ||   \\        \n";
        cout << " ||         ====            \n";
        cout << " ||         /  \\           \n";
        cout << " ||        /    \\          \n";
        cout << " ||     ooo      ooo   #    \n";
        cout << " ||                         \n";
        cout << "רררררררררררררררררררררררררררר\n"; // 28 "ר"
        break;
    case 0:
        cout << "[####################]      \n";
        cout << " || /         |             \n";
        cout << " ||/     / ֶֶֶֶֶֶ \\     *  \n";
        cout << " ||      | |x  x| |         \n";
        cout << " ||      \\ |_ =_| /        \n";
        cout << " ||        q_||_p           \n";
        cout << " ||       |  ||  |          \n";
        cout << " ||       |  ||  |          \n";
        cout << " ||         ====     *      \n";
        cout << " ||         /  \\           \n";
        cout << " ||  *     /    \\          \n";
        cout << " ||       o      o          \n";
        cout << " ||       o      o          \n";
        cout << "רררררררררררררררררררררררררררר\n"; // 28 "ר"
        break;
    default:
        cout << "[####################]      \n";
        cout << " || /         |             \n";
        cout << " ||/     / ֶֶֶֶֶֶ \\     *  \n";
        cout << " ||      | |x  x| |         \n";
        cout << " ||      \\ |_ =_| /        \n";
        cout << " ||        q_||_p           \n";
        cout << " ||       |  ||  |          \n";
        cout << " ||       |  ||  |          \n";
        cout << " ||         ====     *      \n";
        cout << " ||         /  \\           \n";
        cout << " ||  *     /    \\          \n";
        cout << " ||       o      o          \n";
        cout << " ||       o      o          \n";
        cout << "רררררררררררררררררררררררררררר\n"; // 28 "ר"
            break;
    }
}