#include<stdio.h>
int main()
{
	int x,y,y1;
	printf("Enter 3 digit Number : ");
	scanf("%d",&x);
	y1 = x/10;
	y = y1%10;
	printf("Result = %d",y);
}
