#include<stdio.h>
int disp_total_odd_digits(int);
int main ()
{
	int x,y;
	printf("Enter a multiDigit integer to count total no. of single digit odd number: "); 
	scanf("%d",&x);
	y = disp_total_odd_digits(x);
	printf("%d\n",y);
}
int disp_total_odd_digits(int a)
{
	int result=0;
	for(int i=a;i>0;i=i/10)
	{
		int isItOdd=i%10;
		//printf("isItOdd = %d\n",isItOdd);
		if(isItOdd%2 != 0)
		{
			//printf("yesItis = %d\n",isItOdd);
			result++;	
		}
	}
	return (result);
}


