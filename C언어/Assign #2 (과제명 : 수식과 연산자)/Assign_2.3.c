#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int X1, X2, X3, X4, X5;
  float arithmeticmean, harmonicmean;
  
  scanf("%d %d %d %d %d", &X1, &X2, &X3, &X4, &X5);

  arithmeticmean = (X1 + X2 + X3 + X4 + X5) / 5;
  harmonicmean = 5 / (X1 + X2 + X3 + X4 + X5);

  printf("산술평균 : %2If\n", arithmeticmean);
  printf("조화평균 : %2If\n", harmonicmean);
}
