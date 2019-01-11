#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf(2, "Usage: invertcase [string1] [string2] ...\n");
        exit();
    }
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != 0; ++j)
        {
            if (argv[i][j] <= 90 && argv[i][j] >= 65)
                argv[i][j] += 32;
            else if (argv[i][j] >= 97 && argv[i][j] <= 122)
                argv[i][j] -= 32;
        }
        printf(1, "%s%s", argv[i], i + 1 < argc ? " " : "\n");
    }
    exit();
}