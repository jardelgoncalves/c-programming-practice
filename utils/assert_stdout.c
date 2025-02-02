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

  char buffer[1024];
  size_t len = fread(buffer, sizeof(char), sizeof(buffer) - 1, archive_temp);

  buffer[len] = '\0';

  assert(strcmp(buffer, resultExpected) == 0);

  fclose(archive_temp);
}