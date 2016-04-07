#include <assert.h>

#include <stdlib.h>

#include "part5.h"

long bar(long * a, int size)
{
    // TODO: Your code here.

    // the bar function calculates the sum of
    // (sum of values in array) + (product of values in array)
    int x = 0;
    int y = 1;
    long c;
    long r;

    while ((size-1) > x)
    {
        c = (long) x;
        c = a[c];
        r += c;
        y *= c;
        x++;
    }
    r += y;
    return r;
}

long part5(int size)
{
    // TODO: Your code here.

    long a = (long) size;
    // address computation so we can decrement the stack pointer to add space
    a = 0x16 + 8*a;
    a = a & 0xfffffffffffffff0;

    // the size of the array should be the amount decremented
    int i = 0;
    long array[a];

    while (i < size)
    {
        array[i] = (long) 2*i;
        i++;
    }

    // now that we have set the values in the array, we return what bar calculates
    return bar (array, size);
}