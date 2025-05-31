#include<stdio.h>
int count_total_digits(int);
int main ()
{
	int x,y;
	printf("Enter a multi Digit Number: ");
	scanf("%d",&x);
	y=count_total_digits(x);
	printf("number of Digits in this number are %d",y);
}

int count_total_digits(int x)
{
	int count = 0;
	for(;x>0;)
	{
		x=x/10;
		count++;
	}
	return count;

}


