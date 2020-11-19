#include<stdio.h>
int add(int[]);
void main()
{
 int a[10],s,i;
 printf("\nEnter elements:");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);

 s=add(a);
 printf("\nSum of elements:%d",s);
}

int add(int ar[])
{
  int i,s=0;
  for(i=0;i<10;i++)
  s=s+ar[i];

  return s;
}
