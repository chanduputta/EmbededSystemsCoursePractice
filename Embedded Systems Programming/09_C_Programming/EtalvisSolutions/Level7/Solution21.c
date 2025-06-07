#include<stdio.h>
void disp_total_odd_digits(int);
int main ()
{
	int x,y;
	printf("Enter a multi digit number \n");
	scanf("%d",&x);
	disp_total_odd_digits(x);
}

void disp_total_odd_digits(int x)
{
	printf("Total number of single digit odds in given number: ");
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
