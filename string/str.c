#include <stdio.h>
#include <string.h>

int main()
{
  char str1[] = "no";
  char str2[] = "ya";
  int strCmpCheck = strcmp(str1, str2);

  printf("%x", strCmpCheck);

  return 0;
}