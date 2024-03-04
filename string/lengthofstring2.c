#include<stdio.h>
void main()
{
  int i;
  char a[100];
  printf("enter a string: ");
  gets(a);
  for( i=0;a[i]!='\0';i++)
  printf("string length: %d",i);   
}