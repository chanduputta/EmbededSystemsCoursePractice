#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a THREE digit Number :");
	scanf("%d",&x);
	int y1;
	y1=x%100;
	y = y1/10;
	printf("The digit in Tens position is %d\n",y);
}

