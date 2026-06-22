#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  float cm, ft, in;

  printf("키를 입력하시요(cm) : ");
  scanf("%f", &cm);

  printf("***************\r\n");

  in = cm/2.54;
  ft = in/12;

  printf("%.0fcm은 %.2f피트 %.2f인치입니다", cm, ft, in);
  return 0;
}
