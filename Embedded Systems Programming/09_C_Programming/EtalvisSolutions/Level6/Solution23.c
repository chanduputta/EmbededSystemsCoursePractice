#include<stdio.h>
int main()
{
	printf("Program to print total number of single-digit perfect square numbers in given number. \n\n");
	int x=0,input=0,x1=0,counter=0,i=0;
	printf("Enter a number :  ");
	scanf("%d",&input);
	x=input;
	while( x > 0)
	{
		x1 = x%10;
		i=0;
		while (i<=x1)
		{
			if(i*i == x1)
			{
			counter++;
			//printf("%d\n",x1);
			}
			i++;
		}

		x=x/10;
	}

	printf("%d\n",counter);
}
