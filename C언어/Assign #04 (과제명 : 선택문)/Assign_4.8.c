#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

  int sum=0;
  int i;

  for (i = 100; i < 200; i++) {
    if (i % 3 == 0) {
      sum+=1;
}
}

  printf("100이상 200미만의 정수 중 3의 배수의 값들의 합 : %d", sum);

  return 0;
}
