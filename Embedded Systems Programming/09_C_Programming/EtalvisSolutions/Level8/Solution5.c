#include<stdio.h>
int count_total_digits(int);
int main ()
{
	int x,y;
	printf("Enter a multiDigit integer to print its total number of digits : "); 
	scanf("%d",&x);
	y = count_total_digits(x);
	printf("%d\n",y);
}
int count_total_digits(int a)
{
	int count=0;
	for(int i=a;i>0;i=i/10)
	{
		count++;
	}
	return (count);
}
	
