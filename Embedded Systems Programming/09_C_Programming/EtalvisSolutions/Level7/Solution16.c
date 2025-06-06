#include<stdio.h>
void check_prime(int);
int main ()
{
	int x,y;
	scanf("%d",&x);
	check_prime(x);
}

void check_prime(int x)
{
	int count =0;
	for(int i = 1; i<=x ; i++)
	{
		if(x%i == 0)
			count++;
	}
	if(count != 2)
		printf(" Not Prime");
	else
		printf("Prime");
}


