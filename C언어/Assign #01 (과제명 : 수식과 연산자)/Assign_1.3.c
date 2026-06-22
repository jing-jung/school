#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  double f,c;
  printf("화씨온도를 입력하세요.\r\n");
  
  scanf("%lf", &f);
  c = (f - 32) * 5 / 9;
  printf("섭시온도는 %f도입니다", c);
}
