#include<stdio.h>
void disp_total_2digit_odd(int);
int main ()
{
	int x,y;
	printf("Enter a multi digit number \n");
	scanf("%d",&x);
	disp_total_2digit_odd(x);
}

void disp_total_2digit_odd(int x)
{
	printf("Total number of two digit odds in given number: ");
	int counter1 =0;
	for(;x>9;x=x/10)
	{
		int x1 = x%100;
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
