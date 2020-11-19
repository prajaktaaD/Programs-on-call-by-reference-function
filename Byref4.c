void main()
{
 int a[10],s,i;
 printf("\nEnter elements:");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);

 s=add(a);
 printf("\nSum of elements:%d",s);
}

int add(int *p)
{
  int i,s=0;
  for(i=0;i<10;i++,p++)
  s=s+*p;

  return s;
}
