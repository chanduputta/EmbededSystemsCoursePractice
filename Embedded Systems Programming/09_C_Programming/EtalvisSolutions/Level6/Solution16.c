#include<stdio.h>
int main()
{
	printf("Program to print whether given number is prime or not.\n\n");
	int x=1,input=0,counter=0;
	printf("Enter a number :  ");
	scanf("%d",&input);
	while(x <= input)
	{

		if(input%x == 0)
		{
			counter++;
		}
		x++;
	}
//	printf("%d\n",counter);
	if (counter == 2)
	{
		printf("Given number %d is a prime number\n",input);
	}
	else
	{
		printf("Given number %d is not a prime number\n",input);
	} 
}
