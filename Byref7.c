#include<stdio.h>
int display(int *);
void main()
{
  int i,a[10];
  printf("\nEnter elemets:");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);

  display(a);
}

int display(int *p)
{
  int i;
  printf("\nThe array ele:\n");
  for(i=0;i<10;i++,p++)
  printf("%d",*p);

  return 0;
}
