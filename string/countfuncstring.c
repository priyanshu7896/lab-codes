#include<stdio.h>
#include<ctype.h>
void check(char []);
void main()
{
  char a[100];
  printf("enter the string: ");
  gets (a);
  check(a);
}

void check(char a[])
 {
  int v=0,c=0,s=0,i;
  for( i=0;a[i]!='\0';i++)
    {
      if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
      {
        a[i]=tolower(a[i]);
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        v++;
        else
        c++;
      }
      else
      s++;
    }
    printf("vowels: %d\nconsonents: %d\nspecial character: %d\n",v,c,s);
}