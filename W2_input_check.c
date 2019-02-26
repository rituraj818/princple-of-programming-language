#include<stdio.h>
#include<conio.h>
void main()
{
  char input;
  scanf("%c",&input);
  int ascii=(int)input;
  if(ascii>=65 && ascii<=90)printf("Capital Letters");
  else if(ascii>=97 && ascii<=122)printf("Small Letters");
  else if(ascii>=48 && ascii<=57)printf("Digits");
  else if(ascii<=127)printf("Special Character");
  getch();
}
