#include <stdio.h>
int main()
{
  int i, j, count = 5;
  for (i = 0; i < count; i++)
  {
    for (j = 0; j < i; j++)
    {
      printf(" ");
    }
    for (j = i; j < count; j++)
    {
      printf("*");
    }
    for (j = i + 1; j < count; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
