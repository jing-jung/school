#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  float x,y;

  printf("x 좌표를 입력하시오 : ");
  scanf("%f", &x);

  printf("y 좌표를 입력하시오 : ");
  scanf("%f", &y);

  printf("***************\r\n");

  (x > 0 && y > 0) ? printf("(%0.f,%0.f)은 1사분면에 위치",x,y) : printf(" ");
  (x < 0 && y > 0) ? printf("(%0.f,%0.f)은 2사분면에 위치",x,y) : printf(" ");
  (x < 0 && y < 0) ? printf("(%0.f,%0.f)은 3사분면에 위치",x,y) : printf(" ");
  (x > 0 && y < 0) ? printf("(%0.f,%0.f)은 4사분면에 위치",x,y) : printf(" ");

  return 0;
}
