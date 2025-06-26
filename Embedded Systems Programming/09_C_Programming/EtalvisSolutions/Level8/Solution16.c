#include<stdio.h>
int disp_biggest_4digit_div7_9();
int main ()
{
	int y;
	printf("Printing biggest 4-digit number which is divisible by 7 & 9 : ");
	y = disp_biggest_4digit_div7_9();
	printf("%d\n",y);
}
int disp_biggest_4digit_div7_9()
{
	int result;
	for(int i=1000;i<10000;i++)
	{
		if(i%7==0 && i%9==0)
		{
			result = i;
		}
	}
	return (result);
}
	
