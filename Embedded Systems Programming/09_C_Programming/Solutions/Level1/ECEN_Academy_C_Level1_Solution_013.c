#include<stdio.h>
int main()
{
	int x,x1,x2,y;
	printf ("Enter 2 digit Number:");
	scanf("%d",&x);
	x1 = x/10;
	x2 = x%10;
	y = x2*10+x1;
	printf("Result = %d",y);
}

