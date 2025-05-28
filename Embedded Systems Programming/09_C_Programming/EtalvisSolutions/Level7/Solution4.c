#include<stdio.h>
void disp_rsum(int);
int main ()
{
	int x;
	disp_rsum(6);
}

void disp_rsum(int x)
{
	int sum = 0;
	for(int i=x; i>0; i--)
	{
		sum = sum+i;	
	}
	printf("%d\n",sum);
}


