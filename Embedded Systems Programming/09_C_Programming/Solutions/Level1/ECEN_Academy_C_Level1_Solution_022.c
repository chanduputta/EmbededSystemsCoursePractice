#include <stdio.h>
int main ()
{
	int x,x1,x2,x3,y;
	printf ("Enter Number :");
	scanf("%d",&x);
	x1 = x-5;
	x2 = x%100;
	x3 = x2/10;
	//printf("x3 10ns position = %d",x3); 
	y = (x3%2 == 0)? x:x1;
	printf("Result = %d",y);
}
