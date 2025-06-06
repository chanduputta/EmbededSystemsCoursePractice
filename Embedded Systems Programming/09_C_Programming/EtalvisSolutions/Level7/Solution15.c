#include<stdio.h>
int check_last_digit_odd(int);
int power(int,int);
int main()
{
	int x,y;
	printf("Enter a multi Digit Number: ");
	scanf("%d",&x);
	y = check_last_digit_odd(x);
	printf("\nProgrammed to get a number from user and if the last digit of the number is even print the same number. If the last digit of number is odd, then subtract 1 from the last digit and print the number i.e. %d\n",y);
}

int power(int base, int pow)
{
	int output = 1;
	for(;pow>0;pow--)
	{
		output=output*base;
	}
	return output;
}

int check_last_digit_odd(int x)
{
	int num = 0,count = 0;
	int givenNum = x;
	for(;givenNum>9;givenNum=givenNum/10)
	{
		count++;
	}
	int lastdigit = x/power(10,count);
	if (lastdigit%2 != 0)
	{
		lastdigit--;
	}
	int remainingDigits = x%power(10,count);
	num = lastdigit*power(10,count)+remainingDigits;
	return num;
}
