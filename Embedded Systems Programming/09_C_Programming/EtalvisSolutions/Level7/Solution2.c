#include<stdio.h>
void disp_descend(int);
int main ()
{
	int x,y;
	x=5;
	disp_descend(x);
}

void disp_descend(int x)
{
	for(int i=x; i>0; i--)
	{
		printf("%d\n",i);
	}
}


