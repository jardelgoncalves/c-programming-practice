#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "../../utils/assert_stdout.c"
#include "hello_world.c"

void run_tests()
{

  printf("\033[1mRunning Test for 'Hello, World!'\033[0m\n");

  assert_stdout(hello_world, "Hello, World!\n");
  printf("\033[32mTest 1 Passed: \"Hello, World!\\n\"\033[0m\n");

  printf("\n\033[1;32mAll tests passed for 'Hello, World!'!\033[0m\n");
}