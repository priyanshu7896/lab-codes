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

  printf("after swapping:\n");
  *pa=*pa+*pb;
  *pb=*pa-*pb;
  *pa=*pa-*pb;

  printf("value of a:%d\n",*pa);
  printf("value of b:%d\n",*pb);

}