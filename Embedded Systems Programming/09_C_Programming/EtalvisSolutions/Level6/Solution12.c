#include<stdio.h>
int main()
{
	int x,sum=0;
	printf("Program to get a number from user print the sum of all digits in that number\n\n");
	printf("Enter a number: ");
	scanf("%d",&x);
	while(x>0)
	{
		sum = sum+x%10;
		x=x/10;
	}
	printf("%d\n",sum);

}
