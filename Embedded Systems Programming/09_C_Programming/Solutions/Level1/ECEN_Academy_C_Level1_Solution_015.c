#include<stdio.h>
int main ()
{
	int x,y,x1,x2,x3,x4;
	printf("Enter 4 digit Number : ");
	scanf("%d",&x);
	x1 = x/100;
	x2 = x%100;
	x3 = x2/10;
	x4 = x2%10;
	y = x1*100+x4*10+x3;
	printf("Result = %d",y);
}
	
