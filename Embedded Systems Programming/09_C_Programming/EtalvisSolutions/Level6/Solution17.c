#include<stdio.h>
int main()
{
	printf("Program to print whether given number is prime and sum of digit is equal to 14.\n\n");
	int x = 0,input=0,counter=0,sum=0;
	printf("Enter a number :  ");
	scanf("%d",&input);
	while(x <= input)
	{
		x++;
		if(input%x == 0)
		{
			counter++;
		}
	}
//	printf("%d\n",counter);
//	printf("%d\n",x);
	x = input;
	while(x>0)
	{
		sum = sum+x%10;
		x=x/10;
	}

	if (counter == 2 && sum == 14)
	{
		printf("Given number %d is a prime & sum of digits is 14\n",input);
	}
	else if (counter == 2 && sum != 14)
	{
		printf("Given number %d is a prime & sum of digits is not 14\n",input);	
	} 
	else if (counter != 2 && sum == 14)
	{	printf("Given number %d is Not prime but sum of digits is 14\n",input);
	}
	else
	{
		printf("Given number %d is Not prime & sum of digits is not 14\n",input);
	}
}
