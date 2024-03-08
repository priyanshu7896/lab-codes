#include<stdio.h>
void maxmin(int *,int *, int*,int);
void main()
{
  int n,i,max,min;
  printf("enter the size of an array: ");
  scanf("%d",&n);
  
  int a[100];
  printf("enter the elemnts of an array: ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  min=max=a[0];
  maxmin(a,&max,&min,n);
  
  printf("max: %d \n",max);
  printf("min: %d \n",min);
}

void maxmin(int *p,int *q ,int *r,int n)
{
   int i;
   for( i=0;i<n;i++)

  {
          for (i = 0; i < n; i++) 
          {
            if(*(p+i) > *q)
            *q = *(p+i);
             
            else if (*(p+i) < *r)
            *r = *(p+i);
          } 
}
}