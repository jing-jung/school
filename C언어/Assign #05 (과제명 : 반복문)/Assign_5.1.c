#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int a;
  for (a = 1; a <= 50; a++) {
    printf("%2d ", a);
    if (a % 10 == 0)
      printf("\r\n");
}
  return 0;
}
