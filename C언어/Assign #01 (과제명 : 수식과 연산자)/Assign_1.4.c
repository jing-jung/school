#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multiply(int a, int b)
{
  return a * b;
}

int main()
{
  int length, height, width;
  
  printf("상자의 길이, 높이, 깊이를 순서대로 입력하세요.\r\n");
  scanf("%d%d%d", &width, &length, &height);

  int volume = Multiply(Multiply(height, length), width);
  printf("상자의 부피는 %d입니다.", volume);
}
