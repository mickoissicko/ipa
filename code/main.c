#include "incl/common.h"

#include <string.h>

int main(int argc, char* argv[])
{
    if (argc < 2) return 1;

    if (strcmp(argv[1], "-d") == 0)
        if (argc > 2)
            RemoveDup(argv[2]);

    else if (
        strcmp(argv[1], "-e") == 0 ||
        strcmp(argv[1], "-eF") == 0
    ){
        int FromFile = 0;

        if (argc < 5) return 1;

        if (strcmp(argv[1], "-e") == 0)
        {
            AddLexicon(argv[2]);
            AddPs(argv[3]);
            AddTranslation(argv[4]);
        }

        else
            AddFromFile(argv[2]);
    }

    return 0;
}
