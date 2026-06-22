#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

  int month;

  printf("월을 입력하시오(1-12) :");
  scanf("%d", &month);

  printf("***************\r\n");

  if (month == 1)
    printf("1월은 영어로 January입니다.");

  else if (month == 2)
    printf("2월은 영어로 February입니다.");

  else if (month == 3)
    printf("3월은 영어로 March입니다.");

  else if (month == 4)
    printf("4월은 영어로 April입니다.");

  else if (month == 5)
    printf("5월은 영어로 May입니다.");

  else if (month == 6)
    printf("6월은 영어로 June입니다.");

  else if (month == 7)
    printf("7월은 영어로 July입니다.");

  else if (month == 8)
    printf("8월은 영어로 August입니다.");

  else if (month == 9)
    printf("9월은 영어로 September입니다.");

  else if (month == 10)
    printf("10월은 영어로 October입니다.");

  else if (month == 11)
    printf("11월은 영어로 November입니다.");

  else
    printf("12월은 영어로 December입니다.");

  return 0;
}
