#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a,b,c,d,e,f,g,h;
  scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
  int res=((a + b / c * d - e) * (f - g));
  printf("%d",res);
  getch();
 }
