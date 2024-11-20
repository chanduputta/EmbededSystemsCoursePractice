#include<stdio.h>
int main ()
{
	int x,x1,x2,y;
	printf("Enter 3 digit Number: ");
	scanf("%d",&x);
	x1 = x/100;
	x2 = x%10;
	y = x1+x2;
	if(y<10)
		printf("Success");
	else
		printf("Failure");
}

