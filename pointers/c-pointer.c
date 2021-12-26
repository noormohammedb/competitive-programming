#include <stdio.h>
int main()
{
  int var = 20;
  int *ptr = &var;

  printf("value of var : %d \n", var);
  printf("address of var : %d \n", &var);
  printf("ptr : %d \n", ptr);
  printf("*ptr : %d \n", *ptr);
  printf("&ptr : %d \n", &ptr);

  printf("size of integer : %d \n", sizeof(int));

  printf("ptr+1 : %d \n", ptr + 1);
  printf("*(ptr+1) : %d \n", *(ptr + 1));

  return 0;
}