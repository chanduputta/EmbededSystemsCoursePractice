#include <stdio.h>
int main()
{
	int x,x1,x2,x3,x4,y;
	printf("Enter Number : ");
	scanf("%d",&x);
	x1 = x/100;
	x2 = x%100;
	x3 = x1/10;
	x4 = x1%10;
	y = x4*1000+x3*100+x2;
	printf("Result = %d",y);
}


