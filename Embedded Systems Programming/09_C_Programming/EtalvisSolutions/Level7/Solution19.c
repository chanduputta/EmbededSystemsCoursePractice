#include<stdio.h>
void middle_2digits_prime(int);
int main ()
{
	int x,y;
	printf("Enter a 4 digit number \n");
	scanf("%d",&x);
	middle_2digits_prime(x);
}

void middle_2digits_prime(int x)
{
	printf("Checking whether the given number's middle two digits is prime\n");
	int x1 = x/10;
	x1 = x1%100;
	int count =0;
	for(int i = 1; i<=x1 ; i++)
	{
		if(x1%i == 0)
			count++;
	}
	if(count != 2)
		printf("No %d is Not Prime",x1);
	else
		printf("Yes %d is Prime",x1);
}


