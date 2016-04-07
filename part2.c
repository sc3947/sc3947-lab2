#include <assert.h>

#include "part2.h"

long part2(long x, long y)
{
    // TODO: Your code here.
    // this program performs arithmetic functions on the two arguments given
    // it ANDS the values after the functions and returns a & b
    long a = (3*x) << 4;
    long b = y + 0x1f;

    if ((y & y) >= 0)
    {
        b = y;
    }

    b = b >> 5;
    return a & b;
}