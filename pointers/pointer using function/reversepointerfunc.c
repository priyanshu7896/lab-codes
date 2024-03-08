#include<stdio.h>
void rev(int *,int);
void main()
{
  int n,a[100],i;
  printf("enter the size of an array: ");
  scanf("%d",&n);
  
  printf("enter the elemnts of an array: ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  rev(a,n);
  for(i=0;i<n;i++)
  printf(" %d ",a[i]) ;
}
void rev(int *p,int n)
{
  int *q ,temp,i;
  q = p+(n-1);

  for(i=0;i<n/2;i++)
  {
      temp=*(p+i);
      *(p+i)=*(p+(n-1)-i);
      *(p+(n-1)-i)=temp;
  }


}