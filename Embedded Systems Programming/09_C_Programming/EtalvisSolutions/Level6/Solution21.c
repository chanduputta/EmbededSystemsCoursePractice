#include<stdio.h>
int main()
{
	printf("Program to print total number of single digit odd numbers in given number. \n\n");
	int x=0,input=0,x1=0,counter=0,Result=0;
	printf("Enter a number :  ");
	scanf("%d",&input);
	x=input;
	while( x > 0)
	{
		x1 = x%10;
		if(x1%2 != 0)
		{
			counter++;
		}
		x=x/10;
	}

	printf("%d\n",counter);
}
