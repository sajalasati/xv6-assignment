#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    double l, temp;
    double temp2 = 0, a = 3.1415, b = 1.00;
    for (int j = 0; j < 7;)
    {
        for (int k = 0; k < 10;)
        {
            for (l = 0; l < 7985641; l += 1.0)
            {
                temp2 = temp2 + 3.14 * 89.64;
                temp = temp + (temp2 / a);
            }
            k = k + (int)b;
        }
        j = j + (int)b;
    }
    printf(1, "myprog ended\n");
    exit();
}