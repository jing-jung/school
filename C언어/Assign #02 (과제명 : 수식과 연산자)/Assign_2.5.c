#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  float distance = 100;
  float cost = 1995;
  float Fuel_efficiency = 17.8;
  float fuel = distance / Fuel_efficiency;
  float price = cost * fuel;

  printf("유류비 : %2If", price);
}
