#include <stdio.h>
#include <assert.h>
#include "sum_of_two_integers.c"

void run_tests()
{
  printf("\033[1mRunning Test for 'Sum of two integers'\033[0m\n");

  assert(sum_of_two_integers(1, 2) == 3);
  printf("\033[32mTest 1 Passed: sum_of_two_integers(1, 2) = %d\033[0m\n", 3);

  assert(sum_of_two_integers(-1, 1) == 0);
  printf("\033[32mTest 2 Passed: sum_of_two_integers(-1, 1) = %d\033[0m\n", 0);

  assert(sum_of_two_integers(0, 0) == 0);
  printf("\033[32mTest 3 Passed: sum_of_two_integers(0, 0) = %d\033[0m\n", 0);

  assert(sum_of_two_integers(10, 5) == 15);
  printf("\033[32mTest 4 Passed: sum_of_two_integers(10, 5) = %d\033[0m\n", 15);

  printf("\n\033[1;32mAll tests passed for 'Sum of two integers'!\033[0m\n");
}