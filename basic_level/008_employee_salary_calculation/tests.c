#include <stdio.h>
#include <assert.h>
#include "employee_salary_calculation.c"
#include "../../utils/assert_stdout.c"

void test_1(void)
{
  employee_salary_calculation(1, 200, 20.50);
}

void test_2(void)
{
  employee_salary_calculation(50, 247, 32.75);
}

void test_3(void)
{
  employee_salary_calculation(10, 150, 42.25);
}

void run_tests()
{
  printf("\033[1mRunning Test for 'Employee Salary Calculation'\033[0m\n");

  assert_stdout(test_1, "NUMBER = 1\nSALARY = $ 4100.00");
  printf("\033[32mTest 1 Passed: employee_salary_calculation(1, 200, 20.50); = NUMBER = 1 and SALARY = $ 4100.00\033[0m\n");

  assert_stdout(test_2, "NUMBER = 50\nSALARY = $ 8089.25");
  printf("\033[32mTest 2 Passed: employee_salary_calculation(50, 247, 32.75); = NUMBER = 50 and SALARY = $ 8089.25\033[0m\n");

  assert_stdout(test_3, "NUMBER = 10\nSALARY = $ 6337.50");
  printf("\033[32mTest 3 Passed: employee_salary_calculation(10, 150, 42.25); = NUMBER = 10 and SALARY = $ 6337.50\033[0m\n");

  printf("\n\033[1;32mAll tests passed for 'Employee Salary Calculation'!\033[0m\n");
}