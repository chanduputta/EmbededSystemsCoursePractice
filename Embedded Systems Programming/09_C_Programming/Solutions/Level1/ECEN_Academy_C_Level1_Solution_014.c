#include <stdio.h>
int main ()
{
	int x,x1,x2,x3,x4,y;
	printf("enter 3 digit Number :");
	scanf("%d",&x);
	x1 = x/10;
	x2 = x1/10;
	x3 = x1%10;
	x4 = x%10;
	y = x2+x3*10+x4*100;
	printf("Result = %d",y);
}
