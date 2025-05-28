#include<stdio.h>
void disp_sum(int);
int main ()
{
	int x;
	disp_sum(5);
}

void disp_sum(int x)
{
	int sum = 0;
	for(int i=1; i<=x; i++)
	{
		sum = sum+i;	
	}
	printf("%d\n",sum);
}


