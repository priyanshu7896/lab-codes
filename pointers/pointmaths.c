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

  printf("sum of the value:%d\n",*pa+*pb);
  printf("subraction of the value:%d\n",*pa-*pb);
  printf("multiplication of the value:%d\n",*pa*(*pb));
  printf("division of the value:%f\n",(float)(*pa)/(*pb));

}