#include <stdio.h>
int main()
{
	int x,y,x1,x11,x2,x3;
	printf ("Enter Number:");
	scanf("%d",&x);
	x1 = x/100;
	x11 = x%100;
	x2 = x11/10;
	x3 = x11%10;
	y = x1+x2+x3;
	printf("Result = %d", y);
}

