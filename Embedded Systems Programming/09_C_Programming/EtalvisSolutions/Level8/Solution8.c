#include<stdio.h>
int disp_interchange_first_last_digit(int);
int main ()
{
	int x,y;
	printf("Enter a multiDigit integer to print interchange of the first & last digits of that number : "); 
	scanf("%d",&x);
	y = disp_interchange_first_last_digit(x);
	printf("Result: %d\n",y);
}
int disp_interchange_first_last_digit(int a)
{
	int rev=0;
	for(int i=a;i>0;i=i/10)
	{
		rev = rev*10+(i%10);
	}
	
	return (rev);
}


