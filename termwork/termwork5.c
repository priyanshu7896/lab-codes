/*
NAME-PRIYANSHU RAWAT                                                       
SECTION-Q
UNIVERSITY ROLL NO-2023910
Ques:5-Write a program in C to split string by space into words.
*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    int l=strlen(str);
    printf("Strings or words after split by space are: \n");
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ')
            str[i]='\n';
    }
    printf("%s",str);
}

