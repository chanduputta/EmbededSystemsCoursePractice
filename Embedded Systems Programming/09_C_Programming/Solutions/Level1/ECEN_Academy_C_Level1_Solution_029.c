#include<stdio.h>
int main()
{
	int x,x1,x2,x3,x4,y;
	printf("Enter 4 digit Number:");
	scanf("%d",&x);
	x1 = x/100;
	x2 = x%100;
	x3 = x1%10;
	x4 = x2/10;
	y = x3+x4;
	if(y>10)
		printf("success");
	else
		printf("Failure");
}

