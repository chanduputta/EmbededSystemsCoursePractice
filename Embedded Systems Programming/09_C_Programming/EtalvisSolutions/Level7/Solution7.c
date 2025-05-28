#include<stdio.h>
void disp_2digit_odd_sum7(int x);
int main ()
{
	int x;
	disp_2digit_odd_sum7(7);
}

void disp_2digit_odd_sum7(int x)
{
	int x1,x2;
	for(int i=11; i<100; i=i+2)
	{	
		x1=i%10;
		x2=i/10;
		if(x1+x2==x)
		{
		printf("%d\n",i);
		}
	}
}


