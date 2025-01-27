#include <stdio.h>
#include <assert.h>
#include "student_weighted_average.c"
#include "../../utils/assert_stdout.c"

void test_1(void)
{
  student_weighted_average(5.00, 7.10);
}

void test_2(void)
{
  student_weighted_average(7.80, 5.50);
}

void test_3(void)
{
  student_weighted_average(0.00, 9.85);
}

void test_4(void)
{
  student_weighted_average(8.30, 9.85);
}

void test_5(void)
{
  student_weighted_average(8.30, 1.75);
}

void test_6(void)
{
  student_weighted_average(0.00, 0.00);
}

void run_tests()
{
  printf("\033[1mRunning Test for 'Student`s Weighted Average'\033[0m\n");

  assert_stdout(test_1, "AVERAGE = 6.43182");
  printf("\033[32mTest 1 Passed: student_weighted_average(5.00, 7.10); = AVERAGE = 6.43182\033[0m\n");

  assert_stdout(test_2, "AVERAGE = 6.23182");
  printf("\033[32mTest 2 Passed: student_weighted_average(7.80, 5.50) = AVERAGE = 6.23182\033[0m\n");

  assert_stdout(test_3, "AVERAGE = 6.71591");
  printf("\033[32mTest 3 Passed: student_weighted_average(0.00, 9.85) = AVERAGE = 6.71591\033[0m\n");

  assert_stdout(test_4, "AVERAGE = 9.35682");
  printf("\033[32mTest 4 Passed: student_weighted_average(8.30, 9.85) = AVERAGE = 9.35682\033[0m\n");

  assert_stdout(test_5, "AVERAGE = 3.83409");
  printf("\033[32mTest 5 Passed: student_weighted_average(8.30, 1.75) = AVERAGE = 3.83409\033[0m\n");

  assert_stdout(test_6, "AVERAGE = 0.00000");
  printf("\033[32mTest 6 Passed: student_weighted_average(0.00, 0.00) = AVERAGE = 0.00000\033[0m\n");

  printf("\n\033[1;32mAll tests passed for 'Student`s Weighted Average'!\033[0m\n");
}