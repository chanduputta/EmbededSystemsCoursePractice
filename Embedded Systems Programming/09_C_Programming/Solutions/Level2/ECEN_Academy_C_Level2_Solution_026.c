// Write a program to print biggest 4 digit number which is divisible by 7 and 9.

#include<stdio.h>
int main ()
{
	int x, xn=0;
	for (x=1000;x<=9999;x++)
	{
		if(x%7==0 & x%9==0)
		{
			xn=x;
		}
	}
	printf("%d",xn);
}
