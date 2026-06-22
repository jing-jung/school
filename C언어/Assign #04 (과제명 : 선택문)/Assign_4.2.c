#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  float a;

  printf("수능 성적 상위 비율을 입력하세요! ");
  scanf("%f", &a);

  if (a <= 4) {
    printf("1등급입니다");
}

  else if (a <= 11) {
    printf("2등급입니다");
}

  else if (a <= 23) {
    printf("3등급입니다");
}

  else if (a <= 40) {
    printf("4등급입니다");
}

  else if (a <= 60) {
    printf("5등급입니다");
}

  else if (a <= 77) {
    printf("6등급입니다");
}

  else if (a <= 89) {
    printf("7등급입니다");
}

  else if (a <= 96) {
    printf("8등급입니다");
}

  else {
    printf("9등급입니다");
}

  return 0;
}
