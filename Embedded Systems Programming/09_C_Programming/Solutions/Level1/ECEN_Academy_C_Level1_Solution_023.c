#include<stdio.h>
int main()
{
	int x,x1,x2,x3,x4,y;
	printf("Enter 2 digit Number:");
	scanf("%d",&x);
	x1 = x-5;
	x2 = x/10;
	x3 = x%10;
	x4 = x2+x3;
	y = (x4%2 == 0)? x:x1;
	printf ("Result = %d",y);
}
