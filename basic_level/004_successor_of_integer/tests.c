#include <stdio.h>
#include <assert.h>
#include "successor_of_integer.c"

void run_tests()
{
  printf("\033[1mRunning Test for 'Successor of an Integer'\033[0m\n");

  assert(successor_of_integer(10) == 11);
  printf("\033[32mTest 1 Passed: successor_of_integer(10) = %d\033[0m\n", 11);

  assert(successor_of_integer(0) == 1);
  printf("\033[32mTest 2 Passed: successor_of_integer(0) = %d\033[0m\n", 1);

  assert(successor_of_integer(-1) == 0);
  printf("\033[32mTest 3 Passed: successor_of_integer(-1) = %d\033[0m\n", 0);

  assert(successor_of_integer(-100) == -99);
  printf("\033[32mTest 4 Passed: successor_of_integer(-100) = %d\033[0m\n", -99);

  printf("\n\033[1;32mAll tests passed for 'Successor of an integer'!\033[0m\n");
}