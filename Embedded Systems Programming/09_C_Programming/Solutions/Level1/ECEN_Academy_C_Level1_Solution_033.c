#include<stdio.h>
int main()
{
	int x1,x2,y,y1,y2,z;
	printf("Enter First Number:");
	scanf("%d",&x1);
	printf("Enter Second Number : ");
	scanf("%d",&x2);
	z = (x1>x2)?x1:x2;
	y1 = z/10;
	y2 = z%10;
	y = y1+y2;
	printf("Result = %d",y);
}

