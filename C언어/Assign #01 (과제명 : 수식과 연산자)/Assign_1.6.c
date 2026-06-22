#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  double weight, height, bmi;
  printf("키 입력(단위 m) : ");
  scanf_s("%lf", &height);

  printf("몸 무게 입력(단위 kg) : ");
  scanf_s("%lf", &weight);

  bmi = weight / height / height;
  printf("***************\nBMI 지수 : %.1lf", bmi);
}
