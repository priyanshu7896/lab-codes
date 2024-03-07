#include<stdio.h>
void main()
{
  int n,i,temp;
  printf("enter the size of an array: ");
  scanf("%d",&n);
  int a[100];
  int *p=&a[0];
  printf("enter the element of an array: ");
  for(i=0;i<n;i++)
  scanf("%d",p+i);


  for(i=0;i<n/2;i++)
  {
    temp= *(p+n-i-1);
    *(p+n-i-1)=*(p+i);
    *(p+i)=temp;
  }
  printf("reversed array:\n");
  for(i=0;i<n;i++)
  printf(" %d ",*(p+i));
}