#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  float fuel = 60;
  float cost = 1995;
  float Fuel_efficiency = 17.8;
  float distance = fuel * Fuel_efficiency;
  float price = cost * 60;

  printf("총 주유비:%2If", price);
  printf("주행 가능한 거리: %2If", distance);
  return 0;
}
