#include<stdio.h>
void main ()
{
	int input=0,count=0,x1=0;
	printf("Enter a number as input : ");
	scanf("%d",&input);
	for(int x=1;x<=input;x++)
	{
		if(input%x == 0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("Prime & ");
	}
	else
	{
		printf(" Not Prime & ");
	}
	
	for(int x=input; x>0;x=x/10)
	{
		x1 = x1+x%10;
	}
	if(x1==14)
		printf("Sum of digits is 14 ");
	else
		printf("Sum of Digits is not 14 ");
	

}



