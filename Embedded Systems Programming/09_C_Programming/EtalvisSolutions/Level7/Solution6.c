#include<stdio.h>
void disp_2digit_odd_below20(int);
int main ()
{
	int x;
	disp_2digit_odd_below20(20);
}

void disp_2digit_odd_below20(int x)
{
	for(int i=11; i<=x; i=i+2)
	{	
		printf("%d\n",i);
	}
}


