#include<stdio.h>
int uppercase(char[]);
void main()
{
  char st[10];
  printf("\nEnter string:");
  scanf("%s",st);
  uppercase(st);

  printf("\nUppercase string:%s",st);
}

int uppercase(char ch[10])
{
  int i;
  for(i=0;ch[i]!=0;i++)
     {
       if(ch[i]>='a'&&ch[i]<='z')
       ch[i]=ch[i]-32;
     }

  return 0;
}
