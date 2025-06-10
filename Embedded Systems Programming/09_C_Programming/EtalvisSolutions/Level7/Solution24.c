#include<stdio.h>
void disp_two_digit_square(int);
int main()
{
	int x,y;
	printf("Enter a multi digit number \n");
	scanf("%d",&x);
	disp_two_digit_square(x);
}

void disp_two_digit_square(int x)
{
	printf("Two digit perfect squares in given number %d are: ",x);
	int counter1 =0;
	for(;x>9;x=x/10)
	{
		int x1 = x%100;
	
	for(int i=4;i<=x1;i++)
	{
		if(i*i == x1)
		{		counter1++;
				printf("%d ",x1);
		}
		else
		{	
			//printf("No %d is not perfect sqyare yet",x1);
		}
	}
	}
	printf("\nTotal: %d\n",counter1);
}
