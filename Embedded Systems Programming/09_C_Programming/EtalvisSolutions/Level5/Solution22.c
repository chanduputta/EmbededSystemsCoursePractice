#include<stdio.h>
void main ()
{
	int input=0,count=0;
	printf("Enter a number as input : ");
	scanf("%d",&input);
	for(int x=input;x>9;x=x/10)
	{
		int input1=x%100;

		if(input1%2 != 0)
		{
			count++;

		}

	}
	
	printf("%d\n",count);
}



