#include<stdio.h>
int disp_sum_all_digits(int);
int main()
{
	int x,y;
	printf("Enter a multi Digit Number: ");
	scanf("%d",&x);
	y = disp_sum_all_digits(x);
	printf("Sum of all Digits in this given number are %d\n",y);
}

int disp_sum_all_digits(int x)
{
	int sum = 0;
	for(;x>0;x=x/10)
	{
		sum = sum+x%10;
	}
	return sum;
}
