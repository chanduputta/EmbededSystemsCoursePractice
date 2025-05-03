#include<stdio.h>
int main()
{
	printf("Print biggest 4 digit number which is divisible by 7 and 9 :\n");
	int x,result;
	x = 999;
	while(x<9999)
	{
		x++;
		if(x%7 == 0 && x%9 == 0)
		{	
			result = x;
		}
	}
	printf("%d\n",result);
}
