#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

  int m, s;
  char a;

  printf("등급(A~D)과 무게(gram)을 공백을 넣어 입력하시오 : ");
  scanf("%c %d", &a, &m);

  switch (a)
  {
    case 'A': s = m / 100 * 12000; break;
    case 'B': s = m / 100 * 10000; break;
    case 'C': s = m / 100 * 7000; break;
    case 'D': s = m / 100 * 5000; break;
    default:
      break;
}

  printf("%c등급 %d그램의 가격은 %d원입니다.", a, m, s);
  return 0;
}
