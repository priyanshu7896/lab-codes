#include<stdio.h>
#include<string.h>
char highfreq(char [],int  );
void main()
{
    char a[100];
    int i,j,l;
    char max_freq;
    printf("Enter a string : ");
    gets(a);
     l=strlen(a);
     max_freq = highfreq(a,l);
    printf("Highest frequency character appears in a string is %c.",max_freq);
}
char highfreq(char a[],int l )
{
    int max_count[l],c,i,j,x=0;
    char max_char[l],max=' ';
    for( i=0;i<l;i++)
    {
         c=0;
        for( j=0;j<l;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        max_count[x]=c;
        max_char[x++]=a[i];
    }
    for( i=0;i<x;i++)
    {
        for( j=0;j<x;j++)
        {
            if(max_count[j]>max_count[i])
                max=max_char[j];
        }
    }
    return max;
}
