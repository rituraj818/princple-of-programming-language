#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  scanf("%d",&n);
  int first=0,second=1;
  printf("%d",0);
  while(n--)
  {
    printf("%d ",second);
    int t=first;
    first=second;
    second=second+t;
   }
   getch();
 }
