#include<stdio.h>
void main()
{
    int r,c,sum=0;
    printf("Input number of rows : ");
    scanf("%d",&r);
    printf("Input number of columns : ");
    scanf("%d",&c);
    printf("Enter the elements of the matrix : \n");
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("The given array is : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("The elements being summed of the lower triangular matrix are: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i>=1&&j<i)
            {
                printf("%d ",a[i][j]);
                sum+=a[i][j];
            }
        }
    }
    printf("\nThe Sum of the lower triangular Matrix Elements are: %d",sum);
}
