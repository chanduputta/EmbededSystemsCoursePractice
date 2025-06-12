#include<stdio.h>
int disp_sum_all_digits(int);
int main ()
{
	int x,y;
	printf("Enter a multiDigit integer to print sum of all digits : "); 
	scanf("%d",&x);
	y = disp_sum_all_digits(x);
	printf("%d\n",y);
}
int disp_sum_all_digits(int a)
{
	int sum=0;
	for(int i=a;i>0;i=i/10)
	{
		int y = i%10;
		sum = sum + y;
	}
	return (sum);
}


