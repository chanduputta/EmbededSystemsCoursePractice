#include<stdio.h>
int main()
{
	printf("Program to print total number of single-digit prime numbers in given number. \n\n");
	int x=0,input=0,x1=0,counter=0,i=0,result=0;
	printf("Enter a number :  ");
	scanf("%d",&input);
	x=input;
	while( x > 0)
	{
		x1 = x%10;
		while (i<=x1)
		{
			i++;
			if(x1%i == 0)
			{
			counter++;
			//printf("%d\n",counter);
			}
		}
		if(counter == 2)
		{	
			result++;
		}
		counter = 0;
		i = 0;
		x=x/10;
	}

	printf("%d\n",result);
}
