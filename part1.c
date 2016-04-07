#include <assert.h>

#include "part1.h"

long part1(long x, long y)
{
    // TODO: Your code here.
	// this program compares the two arguments x and y and returns the larger one. 
    if (x <= y) 
    {
    	return y;
    }
    else 
    {
    	return x;
    }
}