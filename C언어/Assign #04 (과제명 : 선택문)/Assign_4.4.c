#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

  char a;

  printf("문자를 입력하시오 : ");
  scanf("%c", &a);

  printf("***************\n");

  if (a == 65 || a == 69 || a == 73 || a == 79 || a == 85)
    printf("입력한 문자 %c는 모음입니다.", a);
  else if (a == 97 || a == 101 || a == 105 || a == 111 || a == 117)
    printf("입력한 문자 %c는 모음입니다.", a);
  else
    printf("입력한 문자 %c는 자음입니다.", a);
  
  return 0;
}
