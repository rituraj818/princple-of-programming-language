#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int num;
  scanf("%d",&num);
  int sum=0;
  nt d=num%10,d2=num%100,d3=num%1000;
  sum=d+d2+d3;
  printf("Sum of Number's Digit is:%d",sum);
  getch();
 }
