/*
NAME-PRIYANSHU RAWAT                                                       
SECTION-Q
UNIVERSITY ROLL NO-2023910
Ques:4-Write a program in C to find the max element of each row of a matrix.
*/
#include<stdio.h>
void main()
{
    int r,c;
    printf("Input number of rows : ");
    scanf("%d",&r);
    printf("Input number of columns : ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the elements of the matrix : \n");
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
    printf("The maximum element of each row of matrix are: ");
    for(int i=0;i<r;i++)
    {
        int max=0;
        for(int j=0;j<c;j++)
        {
            if(a[i][j]>max)
                max=a[i][j];
        }
        printf("%d ",max);
    }
}
