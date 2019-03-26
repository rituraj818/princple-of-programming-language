#include<stdio.h>
float power(int x,int i)
{   float f=1.0;
	while(i>0)
	{
		f=f*x;
		i--;
	}
	return f;
}
float fact(int i)
{
	float f=1;
	while(i>0)
	{
		f=f*i;
		i--;
	}
	return f;
}
void main()
{
	int x;
	scanf("%d",&x);
	int i;
	float sum=0.0;
	for(i=0;i<=10;i=i+2)
	{
		if(i%4==0)
		{
		sum=sum+power(x,i)/fact(i);	
		}
		else
		{
		sum=sum-power(x,i)/fact(i);	
		}
	}
	printf("%0.3f",sum);
}
