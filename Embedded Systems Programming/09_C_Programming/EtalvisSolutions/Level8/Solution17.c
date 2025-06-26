#include<stdio.h>
int disp_count_sum14(int);
int main ()
{
	int x,y;
	printf("Printing total count of numbers which are less than 100000 and whose sum of digits is 14.\n "); 
	y = disp_count_sum14(100000);
	printf("%d\n",y);
}
int disp_count_sum14(int a)
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


