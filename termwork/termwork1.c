#include<stdio.h>
void unique(int [],int);
int main()
{
  int a[100];
  int n,i,j;
  printf("Input the number of elemnts to be stored: ");
  scanf("%d",&n);
  printf("Input %d element in the array:\n", n );
  
  for(int i=0;i<n;i++)
    {
        printf("Element - %d : ",i);
        scanf("%d",&a[i]);
    }

  unique(a,n);
  return 0;
}
void unique(int a[],int n)
{
  int i,j,c;
    printf("The unique elements found in the array are: ");
    for( i=0;i<n;i++)
    {
         c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        if(c==1)
            printf("%d ",a[i]);
    }
}

