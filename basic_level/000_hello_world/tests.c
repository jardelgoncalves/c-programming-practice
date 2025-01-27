#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "hello_world.c"

void run_tests()
{

  FILE *arquivo_temp = tmpfile();
  FILE *stdout_original = stdout;

  stdout = arquivo_temp;

  hello_world();

  fflush(stdout);
  stdout = stdout_original;

  rewind(arquivo_temp);

  char buffer[100];
  fgets(buffer, sizeof(buffer), arquivo_temp);

  printf("\033[1mRunning Test for 'Hello, World!'\033[0m\n");

  assert(strcmp(buffer, "Hello, World!\n") == 0);
  printf("\033[32mTest 1 Passed: \"Hello, World!\\n\"\033[0m\n");

  fclose(arquivo_temp);

  printf("\n\033[1;32mAll tests passed for 'Hello, World!'!\033[0m\n");
}