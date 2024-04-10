/*
NAME-PRIYANSHU RAWAT                                                       
SECTION-Q
UNIVERSITY ROLL NO-2023910
Ques:7-Write a program to remove characters from a string except alphabets
*/
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int  i,j,l;
    printf("Enter a string : ");
    gets(a);
     l=strlen(a);
    for( i=0;i<l;)
    {
        if(!((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')))
        {
            for( j=i;j<l;j++)
                a[j]=a[j+1];
            l--;
        }
        else i++;
    }
    a[l]='\0';
    printf("After removing characters : %s",a);
}



