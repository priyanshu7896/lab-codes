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

  printf("value of a: %d\n",*pa);
  printf("value of b: %c\n",*pb);
  printf("value of c: %f\n",*pc);
  printf("value of d: %lf\n",*pd);

  return 0;
}