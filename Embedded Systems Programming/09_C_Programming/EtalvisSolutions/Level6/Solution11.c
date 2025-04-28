#include<stdio.h>
int main()
{
	int x,counter=0;
	printf("Program to get a number from user print the total number of digits in that number\n\n");
	printf("Enter a number: ");
	scanf("%d",&x);
	while(x>0)
	{
		counter++;
		x=x/10;
	}
	printf("%d\n",counter);

}
