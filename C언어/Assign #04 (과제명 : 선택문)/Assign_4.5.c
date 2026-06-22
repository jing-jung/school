#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

  int a, b, c;

  printf("정수 3개를 공백을 넣어 입력하시오 : ");
  scanf("%d%d%d", &a, &b, &c);

  printf("***************\r\n");

  if (a < b && a < c)
    printf("가장 작은 수는 %d입니다", a);

  else if (b < a && b < c)
    printf("가장 작은 수는 %d입니다", b);

  else
    printf("가장 작은 수는 %d입니다", a);

  return 0;
}
