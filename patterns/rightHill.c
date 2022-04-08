#include <stdio.h>
int main()
{
  int i, j, k, count = 6;
  for (i = 0; i < count; i++)
  {
    for (j = 0; j < i; j++)
      printf("* ");
    printf("\n");
  }
  for (i = 0; i < count; i++)
  {
    for (j = i; j < count; j++)
      printf("* ");
    printf("\n");
  }

  return 0;
}
