#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a THREE digit Number :");
	scanf("%d",&x);
	y = x%10;	
	printf("The digit in Ones position is %d\n",y);
}
