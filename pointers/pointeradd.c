#include<stdio.h>
 int main()
{
  int a;
  char b;
  float c;
  double d;
  int *pa=&a; 
  char *pb=&b; 
  float *pc=&c; 
  double *pd=&d;

  printf("enter a integer value:\n ");
  scanf("%d",pa);
  printf("enter a character value:\n ");
  scanf(" %c",pb);
  printf("enter a float value:\n ");
  scanf("%f",pc);
  printf("enter a double value:\n ");
  scanf("%lf",pd);

  printf("adress of a: %p\n",pa);
  printf("adress of b: %p\n",pb);
  printf("adress of c: %p\n",pc);
  printf("adress of d: %p\n",pd);

  return 0;
}