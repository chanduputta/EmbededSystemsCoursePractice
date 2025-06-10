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
	printf("Single digit perfect squares in given number %d are: ",x);
	int counter1=0;
	for(;x>0;x=x/10)
	{
		int x1 = x%10;
	
	for(int i=0;i<x1;i++)
	{
		if(i*i == x1)
		{		counter1++;
				printf("%d ",x1);
		}
		else
		{	
			//printf("No %d is not perfect square yet",x1);
		}
	}
	}
	printf("\nTotal: %d\n",counter1);
}
