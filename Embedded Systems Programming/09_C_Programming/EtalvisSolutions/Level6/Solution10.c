#include<stdio.h>
int main()
{
	int x,x1=0,x2=0,sum=0;
	x=11;
	while(x<99)
	{	
		if(x/10 == 7)
		{
			sum = sum +x;
		}
		
		x=x+2;
	}
			printf("%d\n",sum);
}


