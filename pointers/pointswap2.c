#include<stdio.h>
void main()
{
  int a;
  printf("enter the value of a: ");
  scanf("%d",&a);
  int b;
  printf("enter the value of b: ");
  scanf("%d",&b);

  int *pa=&a,*pb=&b;
  int k;

  printf("after swapping:\n");
  k=*pa;
  *pa=*pb;
  *pb=k;

  printf("value of a:%d\n",*pa);
  printf("value of b:%d\n",*pb);

}