#include <stdio.h>
#include <assert.h>
#include "difference_between_two_integers.c"

void run_tests()
{
  printf("\033[1mRunning Test for 'Successor of an Integer'\033[0m\n");

  assert(difference_between_two_integers(10, 9) == 1);
  printf("\033[32mTest 1 Passed: difference_between_two_integers(10, 9) = %d\033[0m\n", 1);

  assert(difference_between_two_integers(100, 100) == 0);
  printf("\033[32mTest 2 Passed: difference_between_two_integers(100, 100) = %d\033[0m\n", 0);

  assert(difference_between_two_integers(10, 0) == 10);
  printf("\033[32mTest 3 Passed: difference_between_two_integers(10, 0) = %d\033[0m\n", 10);

  assert(difference_between_two_integers(0, 0) == 0);
  printf("\033[32mTest 4 Passed: difference_between_two_integers(0, 0) = %d\033[0m\n", 0);

  assert(difference_between_two_integers(100, 39) == 61);
  printf("\033[32mTest 5 Passed: difference_between_two_integers(100, 39) = %d\033[0m\n", 61);

  assert(difference_between_two_integers(-10, 30) == -40);
  printf("\033[32mTest 5 Passed: difference_between_two_integers(-10, 30) = %d\033[0m\n", -40);

  printf("\n\033[1;32mAll tests passed for 'Successor of an integer'!\033[0m\n");
}