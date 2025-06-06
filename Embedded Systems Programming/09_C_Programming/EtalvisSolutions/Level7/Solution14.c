#include<stdio.h>
int disp_interchange_first_last_digit(int);
int power(int,int);
int main()
{
	int x,y;
	printf("Enter a multi Digit Number: ");
	scanf("%d",&x);
	y = disp_interchange_first_last_digit(x);
	printf("Interchanged first last digit of given number %d\n",y);
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

int disp_interchange_first_last_digit(int x)
{
	int num = 0,count = 0;
	int givenNum = x;
	int firstdigit = x%10;
	for(;givenNum>9;givenNum=givenNum/10)
	{
		count++;
	}
	int lastdigit = x/power(10,count);
	int midDigits = (x%power(10,count))/10;
	num = firstdigit*power(10,count)+midDigits*10+lastdigit;
	return num;
}
