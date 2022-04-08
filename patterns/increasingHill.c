#include <stdio.h>
int main()
{
  int i, j, k, l, m, count = 5;
  for (i = 1; i <= count; i++)
  {
    for (j = i; j <= count - 1; j++)
    {
      //			printf("  ");
      printf(" ");
    }
    for (k = 1; k < i; k++)
    {
      //			printf(" * ");
      printf("*");
    }
    for (l = 0; l < i; l++)
    {
      //			printf(" * ");
      printf("*");
    }

    printf("\n");
  }
  return 0;
}
