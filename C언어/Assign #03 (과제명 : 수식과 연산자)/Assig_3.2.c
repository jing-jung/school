#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  float x, b;

  printf("x의 값을 입력하세요 : ");
  scanf("%f", &x);

  b = (2 * x * x * x) - (6 * x) + 1 / (x + 1);
  printf("f(%.3f)=%.3f", x, b);
  
  return 0;
}
