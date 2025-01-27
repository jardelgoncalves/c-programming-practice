#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void assert_stdout(void (*func)(void), const char *resultExpected)
{
  FILE *stdout_original = stdout;
  FILE *archive_temp = tmpfile();

  stdout = archive_temp;

  func();

  fflush(stdout);
  stdout = stdout_original;

  rewind(archive_temp);

  char buffer[100];
  fgets(buffer, sizeof(buffer), archive_temp);

  assert(strcmp(buffer, resultExpected) == 0);

  fclose(archive_temp);
}