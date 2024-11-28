//Question: write a program print total number of single digit Prime numbers
// Answer: 4(2,3,5&7.)
#include <stdio.h>
int main()
{
	int x,xp=0,xn;
	 //since numbers below 10 are obviosly single digit
	for(x=1; x<10; x++) 
	{	
		xn = 0;
		for(int i = 1; i<=x; i++)
	{
		if(x%i == 0)
		{
			xn++;
		}
	}
	
	if(xn==2)
	{	
		//printf("%d",x); //test
		xp++;
	}
	}
	printf("%d",xp);
}

