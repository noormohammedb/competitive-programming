#include <stdio.h>
int main()
{
  int var = 20;
  int *p = &var;
  *p = 33;
  int **q = &p;
  int ***r = &q;

  // printf("var: %d\n", var);
  // printf("&var: %d\n", &var);
  // printf("&p: %d\n", &p);
  // printf("&q: %d\n\n", &q);

  // printf("p: %d\n", p);   //
  // printf("q: %d\n\n", q); //

  printf("*p: %d\n", *p);   // 33
  printf("*q: %d\n\n", *q); // &var

  // printf("*q: %d\n", *q);       // &p
  printf("**q: %d\n\n", *(*q)); // 33

  // printf("*r: %d\n", *r);         // &q
  printf("**r: %d\n", *(*r));   // &var
  printf("***r: %d\n\n", ***r); // 33

  ***r = 88;
  printf("var: %d\n\n", var);

  **q = *p + 2;
  printf("var: %d\n\n", var);

  return 0;
}