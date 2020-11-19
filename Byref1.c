
#include<stdio.h>
int add(int *);
int main()
{
  int n,sum;
  printf("\nEnter Num:");
  scanf("%d",&n);

  sum=add(&n);
  printf("%d +10=%d",n,sum);

  return 0;
}

int add(int *num)
{
  int s;
  s=*num+10;

  return s;
}
