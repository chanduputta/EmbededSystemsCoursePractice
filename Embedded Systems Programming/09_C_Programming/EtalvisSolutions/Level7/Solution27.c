#include<stdio.h>
void disp_count_sum14(int);
int main ()
{
	int x,y;
	printf("Enter a Number [hint 100000]: ");
	scanf("%d",&x);
	disp_count_sum14(x);
}
void disp_count_sum14(int x)
{
	int count =0;
	for(int i = 0;i<x;i++)
	{
	int sum = 0;
	for(int j=i;j>0;j=j/10)
	{
		sum = sum + j%10;
	} 
	if(sum == 14)
	{
		count++;
	}
	}
	printf("Total count of numbers which are less than given number and whose sum of digits is 14 is %d",count);
}


