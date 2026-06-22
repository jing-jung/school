#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int a,b,c,d,f,r;
  
  printf("교환할 금액 익렵(단위 : 원) : ");
  scanf("%d", &a);

  printf("***************\r\n");

  b = a / 500;
  printf("500원 짜리 : %d\r\n", b);

  c = (a - 500 * b) / 100;
  printf("100원 짜리 : %d \r\n", c);

  d = (a - 500 * b - 100 * c) / 50;
  printf("50원 짜리 : %d \r\n", d);

  f = (a - 500 * b - 100 * c - 50 * d) / 10;
  printf("10원 짜리 : %d \r\n", f);

  r = a % 10;
  printf("나머지 : %d \r\n", r);
}
