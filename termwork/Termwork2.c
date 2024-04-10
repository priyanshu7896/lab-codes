#include<stdio.h>
void main()
{
    int a[100];
    int n,i,j,o=0,e=0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Element - %d : ",i);
        scanf("%d",&a[i]);
    }
    int odd[100],even[100];
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even[e++]=a[i];
        else
            odd[o++]=a[i];
    }
    printf("The Even elements are: ");
    for(int i=0;i<e;i++)
        printf("%d ",even[i]);
    printf("\nThe Odd elements are: ");
    for(int i=0;i<o;i++)
        printf("%d ",odd[i]);
}
