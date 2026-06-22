#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

  int n,result;

  printf("n의 값을 입력하시오 : ");
  scanf("%d", &n);

  printf("***************\r\n");

  result = n * (n + 1) * (2*n + 1) / 6;
  printf("계산값은 %d입니다", result);

  return 0;
}
