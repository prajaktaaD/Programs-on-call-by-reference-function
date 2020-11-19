#include<stdio.h>
#include<string.h>
int concat(char*,char*,char*);
void main()
{
  char st1[10],st2[10],st3[20];

  printf("\nEnter string1:");
  scanf("%s",st1);

  printf("\nEnter string2:");
  scanf("%s",st2);

  concat(st1,st2,st3);
  printf("\nThe concatenated string:%s",st3);
}

int concat(char*p1,char*p2,char*p3)
{
  char *t1=p1,*t3=p3;
  for(;*p1!=0;p1++);
  for(;*p2!=0;p2++,p1++)
      *p1=*p2;          //concatenating string
  *p1=0;


  for(;*t1!=0;t1++,p3++)
      *p3=*t1;        //concatenated string ids copied in 3rd string

  *p3=0;

   return 0;
}

 
 
