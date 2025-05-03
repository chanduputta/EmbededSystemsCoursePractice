#include<stdio.h>
int main()
{
	printf("Print the total count of numbers which are less than 100000 and whose sum of digits is 14 :\n");
	int x,result=0;
	x = 0;
	while(x<100000)
	{
		int xn=x,sum=0,x1;
		while(xn>0)
		{ 
			x1 = xn%10;
			sum = sum + x1;
			xn = xn/10;
		}
		if(sum == 14)
		{
			result++;
		}
			x++;
	}
	printf("%d\n",result);
}

