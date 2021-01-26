#ifdef _WIN32
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

int main(int argc, char **argv)
{

  char *str1;
  char *str2;
  str1 = "sssss";
  str2 = "kkkk";
  char *str3 = (char *)malloc(1 + strlen(str1) + strlen(str2));
  strcpy_s(str3, 1 + strlen(str1) + strlen(str2), str1);
  strcat_s(str3, 1 + strlen(str1) + strlen(str2), str2);
  printf("%s", str3);

  return 0;
}

char *add_two_chr(const char *ch1, const char *ch2)
{
  char *ch3 = (char *)malloc(1 + strlen(ch1) + strlen(ch2));
  strcpy_s(ch3, 1 + strlen(ch1) + strlen(ch2), ch1);
  strcat_s(ch3, 1 + strlen(ch1) + strlen(ch2), ch2);
  return ch3;
}

#endif