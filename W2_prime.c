#include<stdio.h>
void main()
{
  clrscr();
  int n;
  scanf("%d",&n);
  printf("%d",2);
  for(int i=3;i<=n;i+=2)
  {  int flg=0;
     for(int j=2;j<i/2;j++)
      {
        if(i%j==0)
          { flg=1;
            break;
          }
      }
      if(flg==0)printf("%d",i);
   }
   getch();
 }
