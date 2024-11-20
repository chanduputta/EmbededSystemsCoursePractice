#include <stdio.h>
int main ()
{
	int x,x1,x2,x3,x4,y;
	printf("Enter 4 digit number Number:");
	scanf("%d",&x);
	x1 = x/10;
	x2 = x1%10; // 10s place
	x3 = x/100;
	x4 = x3%10; // 100s digit
	y = x2+x4;
	if(y==10 & x2>7 || x4>7)
		printf("Success");
	else
		printf("Failure");
}

