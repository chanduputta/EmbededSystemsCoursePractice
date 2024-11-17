#include <stdio.h>
int main()
{
	int x,x1,y;
	printf("Enter Number :");
	scanf("%d",&x);
	x1 = x-5;
	y = (x%2 == 0) ? x : x1 ;
	printf ("Result = %d",y);
}
