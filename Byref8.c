#include<stdio.h>
#include<string.h>
int concat();
void main()
{
  concat();
}

int concat()
{
  char st1[10],st2[10];
  int i,j;
  
  printf("\nEnter string1:");
  scanf("%s",st1);

  printf("\nEnter string2:");
  scanf("%s",st2);

  for(i=0;st1[i]!=0;i++);
  for(j=0;st2[j]!=0;j++);
     {
       st1[i]=st2[j];
       i++;
     }
 st2[j]='\0';
 printf("\nThe new concatenated string is:%s\n"st1);

 return 0;
}
