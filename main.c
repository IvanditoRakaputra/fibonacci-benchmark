#include <stdio.h>
#include "mylib/mylib.h"


int main(void){
  int N = 3;
  printf(" Fibonacci Iterative %d = %d\n",N,fibonacciIterative(N));
  printf(" Fibonacci Recursive %d = %d\n",N,fibonacciRecursive(N));

  return 0;
}

