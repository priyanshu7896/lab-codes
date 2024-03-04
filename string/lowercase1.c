#include<stdio.h>
void main()
{
  char a[100];
  printf("enter a string: ");
  gets(a);
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]>=65&&a[i]<=90)//for lower case
    a[i]+=32;
  }
  puts(a);  
}