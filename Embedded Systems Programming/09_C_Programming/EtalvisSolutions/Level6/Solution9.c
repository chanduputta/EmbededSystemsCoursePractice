#include<stdio.h>
int main()
{
	int x,x1=0,x2=0,sum=0;
	x=10;
	while(x<99)
	{	
		if(x%10 == 5)
		{
			sum = sum +x;
		}
		
		x++;
	}
			printf("%d\n",sum);
}


