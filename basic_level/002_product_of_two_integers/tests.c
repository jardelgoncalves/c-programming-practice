#include <stdio.h>
#include <assert.h>
#include "multiply_two_integers.c"

void run_tests()
{
  printf("\033[1mRunning Test for 'Product of Two Integers'\033[0m\n");

  assert(multiply_two_integers(1, 1) == 1);
  printf("\033[32mTest 1 Passed: multiply_two_integers(1, 1) = %d\033[0m\n", 1);

  assert(multiply_two_integers(0, 10) == 0);
  printf("\033[32mTest 2 Passed: multiply_two_integers(0, 10) = %d\033[0m\n", 0);

  assert(multiply_two_integers(35, 5) == 175);
  printf("\033[32mTest 3 Passed: multiply_two_integers(35, 5) = %d\033[0m\n", 175);

  assert(multiply_two_integers(-1, 5) == -5);
  printf("\033[32mTest 4 Passed: multiply_two_integers(-1, 5) = %d\033[0m\n", -5);

  assert(multiply_two_integers(100, 0) == 0);
  printf("\033[32mTest 5 Passed: multiply_two_integers(100, 0) = %d\033[0m\n", 0);

  printf("\n\033[1;32mAll tests passed for 'Product of two integers'!\033[0m\n");
}