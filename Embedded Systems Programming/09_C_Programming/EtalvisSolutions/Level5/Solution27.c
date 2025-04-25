#include<stdio.h>
void main ()
{
	int input=0,result=0,count=0;
	printf("Total count of numbers which are less than 100000 and whose sum of digits is 14 :\n");
	for(int i=100000;i>0;i--)
	{
		input=i;
		result=0;
		for(int n=input; n>0; n=n/10)
		{
			result=result+n%10;
		}
		if(result==14)
		{
			count++;
		}
	}
	printf("%d\n",count);
}
