#include<stdio.h>
int disp_total_2digit_odd(int);
int main ()
{
	int x,y;
	printf("Enter a multiDigit integer to count total no. of double digit odd number: "); 
	scanf("%d",&x);
	y = disp_total_2digit_odd(x);
	printf("%d\n",y);
}
int disp_total_2digit_odd(int a)
{
	int result=0;
	for(int i=a;i>9;i=i/10)
	{
		int isItOdd=i%100;
		//printf("isItOdd = %d\n",isItOdd);
		if(isItOdd%2 != 0)
		{
			//printf("yesItis = %d\n",isItOdd);
			result++;	
		}
	}
	return (result);
}


