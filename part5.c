#include <assert.h>

#include <stdlib.h>

#include "part5.h"

long bar(long * a, int size) {
    // TODO: Your code here.

    // the bar function calculates the sum of 
    // (sum of values in array) + (product of values in array) 
    int x = 0;
    int y = 1;
    long c;
    long r;

    while ((size-1) > x) {
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
    //int t = size;
    long a = (long) size;
    
    // decrementing the stack pointer to add space
    long* stack;
    // address computation 
    long s = (0x16 + 8*s) & 0xfffffffffffffff0;
    // save the location of the stack pointer
    long* copy = stack;
    stack = stack - s;
    
    // the size of the array should be the amount decremented 
    int i = 0;
    long array[size];
    
    while (i < size) {
        long i_long = (long) i;
        array[i_long] = 2*a;
        i++;
    }

    // now that we have set the values in the array, we return what bar calculates 
    return bar (array, size);
}