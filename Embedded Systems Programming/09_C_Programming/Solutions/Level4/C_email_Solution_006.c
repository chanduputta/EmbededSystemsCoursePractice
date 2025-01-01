#include <stdio.h>
int main()
{
	int x,y,y1,y2;
	printf("Enter a TWO digit Number :");
	scanf("%d",&x);
	y1 = x%10;
	y2 = x/10;
	y = y1*10+y2;
	printf("The reverse of the entered number is %d\n",y);
}



