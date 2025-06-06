#include<stdio.h>
void check_prime_and_sum14(int);
int main ()
{
	int x,y;
	printf("Enter a Number ");
	scanf("%d",&x);
	check_prime_and_sum14(x);
}

void check_prime_and_sum14(int x)
{
	int count =0, sum = 0;
	for(int i = 1; i<=x ; i++)
	{
		if(x%i == 0)
			count++;
	}
	for(int j=x;j>0;j=j/10)
	{
		sum = sum + j%10;
	}
	 
	if(count != 2 && sum == 14)
	{printf("Not Prime but sum of digits is 14");}
	else if(count != 2 && sum != 14)
	{printf("Not Prime & sum of Digits is not 14");}
	else if(count == 2 && sum == 14)
	{printf("Prime & sum of digits is 14");}
	else 
	{printf("Prime & sum of digits is not 14");}
}


