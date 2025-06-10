#include<stdio.h>
void disp_single_digit_prime(int);
int main ()
{
	int x,y;
	printf("Enter a multi digit number \n");
	scanf("%d",&x);
	disp_single_digit_prime(x);
}

void disp_single_digit_prime(int x)
{
	printf("display single digit prime numbers in given number: ");
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
		printf("%d ",x1);
	}
	else
	{	
		//printf("No %d is Not Prime",x1);
	}
	}
	printf("\nTotal %d\n",counter1);
}
