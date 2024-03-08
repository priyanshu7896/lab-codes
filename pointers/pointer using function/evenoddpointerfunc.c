#include<stdio.h>
void evenodd(int *,int, int *,int *  );
void main()
{
  int n,c,even=0,odd=0;
  printf("enter the size of an array: ");
  scanf("%d",&n);
  
  int a[100];
  printf("enter the elemnts of an array: ");
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);

  evenodd(a,n,&even,&odd);
 
  
    printf("even= %d\n",even);
    printf("odd= %d\n",odd);
} 

void evenodd(int *p,int n,int*q,int*r)
 {
    int i;
    for(i=0;i<n;i++)
    {
      if(*(p+i)%2==0)
      *q=*q+1;
      else
      *r=*r+1;
    }
 }    
  
