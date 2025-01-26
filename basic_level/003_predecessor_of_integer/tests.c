#include <stdio.h>
#include <assert.h>
#include "predecessor_of_integer.c"

void run_tests()
{
  printf("\033[1mRunning Test for 'Predecessor of an Integer'\033[0m\n");

  assert(predecessor_of_integer(10) == 9);
  printf("\033[32mTest 1 Passed: predecessor_of_integer(10) = %d\033[0m\n", 9);

  assert(predecessor_of_integer(1) == 0);
  printf("\033[32mTest 2 Passed: predecessor_of_integer(1) = %d\033[0m\n", 0);

  assert(predecessor_of_integer(0) == -1);
  printf("\033[32mTest 3 Passed: predecessor_of_integer(0) = %d\033[0m\n", -1);

  assert(predecessor_of_integer(-100) == -101);
  printf("\033[32mTest 4 Passed: predecessor_of_integer(-100) = %d\033[0m\n", -101);

  printf("\n\033[1;32mAll tests passed for 'Predecessor of an integer'!\033[0m\n");
}