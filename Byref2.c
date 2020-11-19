#include<stdio.h>
int convert(char *)
int main()
{
  char ch;
  printf("\nEnter character:");
  scanf("%c",&ch);

  printf("\nThe converted case is:%c\n",convert(&ch));
  
  return 0;

}

int convert(char *c)
{
  if(*c>=65&&*c<=90)
  *c=*c+32;

  else if(*c>=97&&*c<=122)
  *c=*c-32;

  return *c;
} 
