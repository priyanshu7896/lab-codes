#include<stdio.h>
void swap(int *,int *);
void main()
{
  int a;
  printf("enter the value of a: ");
  scanf("%d",&a);
  int b;
  printf("enter the value of b: ");
  scanf("%d",&b);

  int *pa=&a,*pb=&b;

  swap(pa,pb);

  printf("value of a:%d\n",*pa);
  printf("value of b:%d\n",*pb);

}

void swap(int *a,int *b)
{
  *a=*a+*b;
  *b=*a-*b;
  *a=*a-*b;
}