#include <stdio.h>
int main()
{
	int x,y,x1,x2;
	printf ("Enter 2 digit Number:");
	scanf("%d",&x);
	x1 = x/10;
	x2 = x%10;
	y = x1+x2;
	printf ("Result = %d",y);
}

