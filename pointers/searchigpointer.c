#include<stdio.h>
void searching(int *,int, int *  );
void main()
{
  int n,c;
  printf("enter the size of an array: ");
  scanf("%d",&n);
  
  int a[100];
  int *p=&a[0];
  printf("enter the elemnts of an array: ");
  for(int i=0;i<n;i++)
  scanf("%d",p+i);

  printf("enter the elemnt to be found : ");
  int k;
  scanf("%d",&k);
  c=0;

  for(int i=0;i<n;i++)
  {
    if(*(p+i)==k)
    c++;
  }
  if(c>=1)
  printf("found");
  else
  printf("not found");
}