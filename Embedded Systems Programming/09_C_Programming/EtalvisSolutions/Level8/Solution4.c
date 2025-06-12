#include<stdio.h>
int disp_2digit_odd_sum_tens7(int);
int main ()
{
	int x,y;
	printf("program to print sum of two-digit numbers whose ten's digit is 7\n"); 
	//scanf("%d",&x);
	y = disp_2digit_odd_sum_tens7(7);
	printf("%d\n",y);
}
int disp_2digit_odd_sum_tens7(int a)
{
	int y=0;
	for(int i=10; i<100; i++)
	{
		if(i%2 != 0)
		{
			if(i/10 == 7)
				y =y+i;
		}
	}
	return (y);
}
	
