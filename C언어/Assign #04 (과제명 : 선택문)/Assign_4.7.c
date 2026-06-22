#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

  float x, result;

  printf("실수 x의 갑을 입력하시오 : ");
  scanf("%f", &x);

  printf("***********************\r\n");

  if (x <= 0)
    result = x * x - 9 * x + 2;

  else
    result = 7 * x + 2;

  printf("f(x)의 값은 %.4f입니다", result);

  return 0;
}
