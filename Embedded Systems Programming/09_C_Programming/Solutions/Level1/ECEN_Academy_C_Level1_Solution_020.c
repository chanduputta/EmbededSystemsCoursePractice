#include <stdio.h>
int main ()
{
	int x,x1,x2,y;
	printf ("Enter 3 digit Number: ");
	scanf("%d",&x);
	x1 = x/100;
	x2 = x%10;
	y = x1*100+x2;
	printf("Result = %d",y);
}
