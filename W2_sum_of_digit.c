#include<stdio.h>
#inclue<conio.h>
void main()
{
 int num,sum=0;
 scanf("%d",&num);
 while(num>0)
 {
   int d=num%10;
   sum+=d;
   num/=10;
  }
  printf("sum of digit:%d",&sum);
  getch();
 }
