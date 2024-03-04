#include<stdio.h>
int found(char a[],int k )
{
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]==k)
    return 1;
  }
  return 0;
  
}
void main()
{
  char a[100];
  printf("enter a string: ");
  gets(a);

  char k;
  printf("enter a character you want to search: ");
  k = getchar();

  int res= found(a,k);
  puts(a);
  if(res==1)
  printf("found in the string");
  else
  printf("not found in the string");
}