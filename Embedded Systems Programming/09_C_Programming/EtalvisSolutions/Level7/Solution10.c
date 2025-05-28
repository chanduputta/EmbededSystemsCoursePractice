#include<stdio.h>
void disp_2digit_odd_sum_tens7(int x);
int main ()
{
	int x;
	disp_2digit_odd_sum_tens7(7);
}

void disp_2digit_odd_sum_tens7(int x)
{
	int x1,sum=0;

	for(int i=11; i<100; i=i+2)
	{	
		x1=i/10;
		x1=x1%10;
		if(x1==x)
		{
		sum =sum+i;
		}
	}
	printf("%d\n",sum);
		
}


