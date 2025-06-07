#include<stdio.h>
void number_of_single_digit_prime(int);
int main ()
{
	int x,y;
	printf("Enter a 4 digit number \n");
	scanf("%d",&x);
	number_of_single_digit_prime(x);
}

void number_of_single_digit_prime(int x)
{
	printf("Total number of single digit prime numbers in given number: ");
	int counter1 =0;
	for(;x>0;x=x/10)
	{ int x1 = x%10, counter2 = 0;
	for(int i = 1; i<=x1 ; i++)
	{
		if(x1%i == 0)
			counter2++;
	}
	if(counter2 == 2)
	{
		counter1++;
		//printf("No %d is Prime",x1);
	}
	else
	{	
		//printf("Yes %d is Not Prime",x1);
	}
	}
	printf("%d\n",counter1);
}
