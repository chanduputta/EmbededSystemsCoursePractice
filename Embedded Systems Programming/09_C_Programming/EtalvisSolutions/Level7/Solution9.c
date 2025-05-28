#include<stdio.h>
void disp_2digit_ones5(int x);
int main ()
{
	int x;
	disp_2digit_ones5(5);
}

void disp_2digit_ones5(int x)
{
	int x1,sum=0;

	for(int i=10; i<100; i++)
	{	
		x1=i%10;
		if(x1==x)
		{
		sum =sum+i;
		}
	}
	printf("%d\n",sum);
		
}


