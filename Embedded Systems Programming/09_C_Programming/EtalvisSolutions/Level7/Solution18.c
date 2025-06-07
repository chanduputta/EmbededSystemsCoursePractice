#include<stdio.h>
void check_first_2digits_prime(int);
int main ()
{
	int x,y;
	printf("Enter a multi digit number \n");
	scanf("%d",&x);
	check_first_2digits_prime(x);
}

void check_first_2digits_prime(int x)
{
	printf("Checking whether the given number's first two digits is prime\n");
	int x1 = x%100;
	int count =0;
	for(int i = 1; i<=x1 ; i++)
	{
		if(x1%i == 0)
			count++;
	}
	if(count != 2)
		printf("No %d Not Prime",x1);
	else
		printf("Yes %d Prime",x1);
}


