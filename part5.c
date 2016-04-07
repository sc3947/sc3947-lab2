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
	// this program creates an array that has a size equal to the amount of space 
	// decremented from the stack pointer. we then set the values in the array and 
	// pass the pointer to the array to the bar function, where it calculates the 
	// sum of the values added to the product of the values in the array

    long a = (long) size;
    // address computation so we can decrement the stack pointer to add space
    a = 0x16 + 8*a;
    a = a & 0xfffffffffffffff0;

    // delcare an array where size of the array should be the amount decremented
    int i = 0;
    long array[a];

    while (i < size)
    {
        array[i] = (long) 2*i;
        i++;
    }

    return bar (array, size);
}