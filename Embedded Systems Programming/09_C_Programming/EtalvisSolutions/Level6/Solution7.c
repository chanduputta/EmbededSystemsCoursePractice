#include<stdio.h>
int main()
{
	int x,x1=0,x2=0,sum=0;
	x=11;
	while(x<99)
	{	
		x1=x%10;
		x2 = x/10;
		sum = x1+x2;
		if(sum == 7)
			printf("%d\n",x);
		
		x=x+2;
	}
}


