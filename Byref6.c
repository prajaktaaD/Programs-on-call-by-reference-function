#include<stdio.h>
int uppercase(char *);
void main()
{
  char st[10];
  printf("\nEnter string:");
  scanf("%s",st);
  uppercase(st);

  printf("\nUppercase string:%s",st);
}

int uppercase(char *p)
{
  int i;
  for(i=0;*p!=0;i++,p++)
     {
       if(*p>='a'&&*p<='z')
       *p=*p-32;
     }

  return 0;
}
