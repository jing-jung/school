#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int a;

  printf("20 이하의 정수를 입력하세요 : \r\n");
  scanf("%d", &a);

  while (a > 20) {
    printf("20 이하의 정수를 입력하세요 : \r\n");
    scanf("%d", &a);
    }
  
  if (a = 1) printf("소수가 아닙니다.");
  else if (a > 2 && a % 2) printf("소수가 아닙니다.");
  else if (a > 3 && a % 3) printf("소수가 아닙니다.");
  else
    printf("소수입니다.");

  return 0;
}
