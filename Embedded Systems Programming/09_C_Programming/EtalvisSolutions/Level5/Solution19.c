#include<stdio.h>
void main ()
{
	int input=0,count=0;
	printf("Enter a 4 digit number as input : ");
	scanf("%d",&input);
	int input1 = input/10;
	int input2 = input1%100;
	for(int x=1;x<=input2;x++)
	{
		if(input2%x == 0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("Prime\n");
	}
	else
	{
		printf("Not Prime\n");
	}
	
}



