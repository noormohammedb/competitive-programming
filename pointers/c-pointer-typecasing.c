#include <stdio.h>
int main()
{

  int a = 1025;
  int *p;
  p = &a;

  printf("size of integer is %d bytes \n", sizeof(int));
  printf("p: Address = %d, value = %d \n", p, *p);
  printf("p+1: Address = %d, value = %d \n", p + 1, *(p + 1));

  char *p0;
  p0 = (char *)p; // typecasting

  printf("size of characters is %d bytes \n", sizeof(char));
  printf("p0: Address = %d, value = %d \n", p0, *p0);
  printf("p0+1: Address = %d, value = %d \n", p0 + 1, *(p0 + 1));
  // 1025 => 00000000 0000000 00000100 00000001 (4 byte rep)
  //                          |---4--| |---1--|

  // void pointers

  void *p1;
  p1 = p;

  printf("p1: Address = %d value = %d \n", p1, *(int *)p1);
  printf("p1+1: Address = %d value = %d \n", p1 + 1, *(int *)(p1 + 1));

  return 0;
}