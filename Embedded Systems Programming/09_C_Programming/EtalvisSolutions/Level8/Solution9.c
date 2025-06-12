#include<stdio.h>
int check_last_digit_odd(int);
int main ()
{
	int x,y;
	printf("Enter a multiDigit integer : "); 
	scanf("%d",&x);
	y = check_last_digit_odd(x);
	printf("Result: %d\n",y);
}
int check_last_digit_odd(int a)
{
	int result,count=0,tens = 1,a1;
	for(int i = a;i>0;i=i/10)
	{
		tens = tens*10;
		count++;
	}
	a1 = a/(tens/10);
//	printf("a1 = %d\n tens = %d\n",a1,tens);
	if( a1%2 != 0)
		result = (a1-1)*(tens/10)+a%(tens/10);
	else
		result = a;

	return (result);
}


