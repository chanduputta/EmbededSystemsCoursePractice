#include<stdio.h>
int count_single_digit_prime(int);
int main ()
{
	int x,y;
	printf("Enter a multiDigit integer to count total no. of single digit prime number: "); 
	scanf("%d",&x);
	y = count_single_digit_prime(x);
	printf("%d\n",y);
}
int count_single_digit_prime(int a)
{
	int result=0,count=0;
	for(int i=a;i>0;i=i/10)
	{
		int isItPrime=i%10;
		//printf("isItPrime = %d\n",isItPrime);
		for(int y = 1;y<=isItPrime;y++)
		{
			if(isItPrime%y == 0)
			{
				count++;
			}
		}
		if(count == 2)
		{
			//printf("yesItis = %d\n",isItPrime);
			result++;	
		}
		count=0; //counter reset
	}
	return (result);
}


