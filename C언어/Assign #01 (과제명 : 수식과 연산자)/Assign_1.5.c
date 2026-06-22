#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  const double PI = 3.14159;
  double r;
  printf("반지름을 입력하세요.\r\n");

  scanf("%lf", &r);
  double volume = 4 * PI * r * r * r / 3;
  double area = PI * 4 * r * r;

  printf("****************\n\r구의 부피: %f\n\r구의 겉넓이: %f", volume, area);
}
