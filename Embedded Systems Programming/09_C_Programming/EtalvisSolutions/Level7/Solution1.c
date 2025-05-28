#include<stdio.h>
void disp_assend(int);
int main ()
{
	int x,y;
	x=5;
	disp_assend(x);
}

void disp_assend(int x)
{
	for(int i=1; i<=x; i++)
	{
		printf("%d\n",i);
	}
}


