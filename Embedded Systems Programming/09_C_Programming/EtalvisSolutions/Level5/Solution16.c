#include<stdio.h>
void main ()
{
	int input=0,count=0;
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
		printf("Prime\n");
	}
	else
	{
		printf("Not Prime\n");
	}

}



