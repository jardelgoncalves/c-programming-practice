#include <stdio.h>
#include <assert.h>
#include "area_of_circle.c"
#include "../../utils/assert_stdout.c"

void test_1(void)
{
  area_of_circle(2.00);
}

void test_2(void)
{
  area_of_circle(100.64);
}

void test_3(void)
{
  area_of_circle(0.00);
}

void run_tests()
{
  printf("\033[1mRunning Test for 'Area of a Circle'\033[0m\n");

  assert_stdout(test_1, "A=12.5664");
  printf("\033[32mTest 1 Passed: area_of_circle(2.00) = A=12.5664\033[0m\n");

  assert_stdout(test_2, "A=31819.3105");
  printf("\033[32mTest 2 Passed: area_of_circle(100.64) = A=31819.3105\033[0m\n");

  assert_stdout(test_3, "A=0.0000");
  printf("\033[32mTest 3 Passed: area_of_circle(0) = A=0.0000\033[0m\n");

  printf("\n\033[1;32mAll tests passed for 'Area of a Circle'!\033[0m\n");
}