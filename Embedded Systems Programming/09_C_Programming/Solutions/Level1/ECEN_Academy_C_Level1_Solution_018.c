#include <stdio.h>
int main ()
{
	int x,x1,y;
	printf ("Enter Number :");
	scanf("%d",&x);
	x1 = x%10;
	y = 10+x1;
	printf("Result = %d",y);
}