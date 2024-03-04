#include<stdio.h>
void length(char a[])
{
  int i;
  for(i=0;a[i]!='\0';i++);
  printf("string length: %d ",i);
}
void main()
{
  char a[100];
  printf("enter a string: ");
  gets(a);

   length(a);
}