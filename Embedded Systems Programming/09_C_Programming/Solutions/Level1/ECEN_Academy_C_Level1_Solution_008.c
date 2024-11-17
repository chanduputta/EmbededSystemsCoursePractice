#include <stdio.h>
int main()
{
	int x,y,y1;
	printf("Enter Number:");
	scanf("%d",&x);
	y1 = x%100;
	y = y1%10;
	printf("Result = %d",y);
}
