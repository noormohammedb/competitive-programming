#include <stdio.h>
int main()
{
  int i, j, k, l, count = 5;
  for (i = 0; i < count; i++)
  {
    for (j = 0; j < i; j++)
    {
      printf(" ");
    }
    for (k = i; k < count; k++)
    {
      printf("*");
    }
    for (l = i + 1; l < count; l++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("===============\n");
  return 0;
}
