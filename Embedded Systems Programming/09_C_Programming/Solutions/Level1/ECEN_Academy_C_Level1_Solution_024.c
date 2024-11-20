#include<stdio.h>
int main()
{
	int x,x1,x2,x3,y;
	printf("Enter 3 digit Number :");
	scanf("%d",&x);
	x1 = x-5;
	x2 = x/100;
	x3 = x%10;
	y = (x2 == x3)? x1 : x ;
	printf("Result = %d",y);
}

