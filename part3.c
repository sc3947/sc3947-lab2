#include <assert.h>

#include "part3.h"

char part3(long x, int b)
{
    // TODO: Your code here.
    // the program checks if b is within the parameters 0 and 7. if it is, then we return 0.
    // if it's not, we make a shift value and multiply the int b given by 8.
    // we shift to get the last byte of that shift value and shift the long x by that last byte.

    char a;

    if ((b&b) < 0)
    {
        a = 0x0;
        return a;
    }

    if (b > 7)
    {
        a = 0x0;
        return a;
    }

    char c = b*8;
    // %cl shifts to get the last byte
    char low = (c << 7) >> 7;
    x = x >> low;

    return x;
}