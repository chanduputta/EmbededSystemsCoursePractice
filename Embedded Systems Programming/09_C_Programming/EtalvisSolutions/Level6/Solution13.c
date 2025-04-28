#include<stdio.h>
int main()
{
	int x,result=0;
	printf("Program to get a number from user and print the reverse of that number\n\n");
	printf("Enter a number: ");
	scanf("%d",&x);
	while(x>0)
	{
		result = result*10+x%10;
		x=x/10;
	}
	printf("%d\n",result);
}
