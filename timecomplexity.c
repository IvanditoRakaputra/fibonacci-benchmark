#include <stdio.h>
#include "mylib/mylib.h"
#include <time.h>

int main()
{
    int n = 40, c;
    clock_t t;
    t = clock();
    for (c = 1; c <= n; c++)
    {
      fibonacciRecursive(c);
    }
    t = clock()-t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken: %f \n", time_taken);

    int q = 40, d;
    clock_t z;
    z = clock();
    for (d = 1; d <= q; d++)
    {
      fibonacciIterative(d);
    }
    z = clock()-z;
    double timetaken = ((double)z)/CLOCKS_PER_SEC;
    printf("Time taken: %f \n", timetaken);
}

