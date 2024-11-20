#include<stdio.h>
int main ()
{
	int x,x1,x2,s,y;
	printf("Enter First 2 digit Number:");
	scanf("%d",&x1);
	printf("Enter Second 2 digit Number:");
	scanf("%d",&x2);
	x = x1+x2;
	if(x1>x2)
		s = x1-x2;
	else
		s = x2-x1;
	y = (x<100)? x:s;
	printf ( "Result = %d",y);
}



