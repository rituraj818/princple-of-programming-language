#include<stdio.h>
#include<conio.h>
void main()
{
   int cp,sp;
   scanf("%d%d",&cp,&sp);
   if(sp>cp)printf("Profit of %d:",((sp-cp)*100)/cp);
   else printf("Loss of %d:",((sp-cp)*100)/cp);
   getch();
 }
