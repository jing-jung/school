#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fun1(double a, double b);
double fun2(double a, double b);
double fun3(double a, double b);

int main() {
  double a, b;
  scanf("%lf %lf", &a, &b);

  printf("%.3lf\n", fun1(a, b));
  printf("%.3lf\n", fun2(a, b));
  printf("%.3lf\n", fun3(a, b));
  
  return 0;
}

double fun1(double a, double b)
{
  return a * b - 5;
}

double fun2(double a, double b)
{
  return a * b / 3 * (a + b);
}

double fun3(double a, double b)
{
  return a * a * a + b * b - 2 * a * b + 3;
}
