#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fun(double a, double b);

int main()
{
  double a, b;
  scanf("%lf %lf", &a, &b);
  printf("%.2lf\n", fun(a, b));

  return 0;
}

double fun(double a, double b)
{
  return 40.6+0.72*(a+b);
}
