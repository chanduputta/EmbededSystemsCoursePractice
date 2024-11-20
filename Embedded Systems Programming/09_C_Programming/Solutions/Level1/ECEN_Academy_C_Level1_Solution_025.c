#include <stdio.h>
int main()
{
	int x,x1,x2,x3,x4,x5,y;
	printf ("Enter 4 digit Number: ");
	scanf("%d",&x);
	x1=x-5;
	x2=x/10;
	x3=x2%10; //tens digit
	x4=x2/10; 
	x5=x4%10; //100s digit
	y = (x3==x5)?x1:x;
	printf("Result = %d",y);
}


