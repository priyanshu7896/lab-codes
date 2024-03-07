#include<stdio.h>
void main()
{
  int n,i,m;
  printf("enter the size of an array 1 : ");
  scanf("%d",&n);

  printf("enter the size of an array 2 : ");
  scanf("%d",&m);

  int a[100],b[100],c[100];
  int *p=&a[0],*q=&b[0],*r=&c[0];

  printf("enter the elemnts of array 1: ");
  for(i=0;i<n;i++)
  scanf("%d",p+i);

  printf("enter the elemnts of array 2: ");
  for(i=0;i<m;i++)
  scanf("%d",q+i);

  printf("Merged array:\n");
  m=n+m;
  for(i=0;i<m;i++)
  {
      if(i<n)
      *(r+i)=*(p+i);
      else
      *(r+i)=*(q+i-n);

  }
  for(i=0;i<m;i++)
  printf(" %d ",*(r+i));
}  