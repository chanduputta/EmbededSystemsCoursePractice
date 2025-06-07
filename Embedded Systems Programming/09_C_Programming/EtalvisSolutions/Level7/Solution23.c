#include<stdio.h>
void disp_single_digit_square(int);
int main()
{
	int x,y;
	printf("Enter a multi digit number \n");
	scanf("%d",&x);
	disp_single_digit_square(x);
}

void disp_single_digit_square(int x)
{
	printf("Total number of single digit perfect squares in given number: ");
	int counter1 =0;
	for(;x>0;x=x/10)
	{
		int x1 = x%10;
	if(x1%2 != 0)
	{
		counter1++;
		//printf("No %d is odd",x1);
	}
	else
	{	
		//printf("Yes %d is even",x1);
	}
	}
	printf("%d\n",counter1);
}
