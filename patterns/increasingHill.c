#include <stdio.h>
int main()
{
  int i, j, count = 5;
  for (i = 1; i <= count; i++)
  {
    for (j = i; j <= count - 1; j++)
    {
      printf(" ");
    }
    for (j = 1; j < i; j++)
    {
      printf("*");
    }
    for (j = 0; j < i; j++)
    {
      printf("*");
    }

    printf("\n");
  }
  return 0;
}
