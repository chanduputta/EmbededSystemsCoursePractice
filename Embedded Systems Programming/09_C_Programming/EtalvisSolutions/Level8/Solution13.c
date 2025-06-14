#include<stdio.h>
int disp_single_digit_square(int);
int main ()
{
	int x,y;
	printf("Enter a multiDigit integer to count total no. of single digit perfect square number: "); 
	scanf("%d",&x);
	y = disp_single_digit_square(x);
	printf("%d\n",y);
}
int disp_single_digit_square(int a)
{
	int result=0;
	for(int i=a;i>0;i=i/10)
	{
		int isItPerfectSquare=i%10;
		//printf("isItPerfectSquare = %d\n",isItPerfectSquare);
		for(int y=1;y<=isItPerfectSquare;y++)
		{
			if(y*y == isItPerfectSquare)
			{
			//printf("yesItis = %d\n",isItPerfectSquare);
				result++;	
			}
		}
	}
	return (result);
}


