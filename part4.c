#include <assert.h>

#include "part4.h"

long foo(long* p, long val)
{
    // TODO: Your code here.
    // foo adds the value of the pointer at p to val and sets the new value to the new val
    // we return the original value at pointer p 
    long x = *p;
    val = val + x;
    *p = val;
    return x;
}

long part4(long* array, int size) {
    // TODO: Your code here.

    // this program loops through the size of the array we are given 
    // it calls foo on the values of the array at index and 2 
    // since foo gives us the original values of the array at index
    // we add those values together and return the total 
    long x;
    long y;
    int i;

    for (i=0; i < size; i++) {
        x = (long) i;
        y += foo (&array[x], 2);
    }
    return y;
}
