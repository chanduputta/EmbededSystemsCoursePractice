#include<stdio.h>
void disp_odd(int);
int main ()
{
	int x;
	disp_odd(9);
}

void disp_odd(int x)
{
	for(int i=1; i<=x; i=i+2)
	{	
		printf("%d\n",i);
	}
}


