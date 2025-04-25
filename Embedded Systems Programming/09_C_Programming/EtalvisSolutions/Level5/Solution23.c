#include<stdio.h>
void main ()
{
	int input=0,count=0;
	printf("Enter a number as input : ");
	scanf("%d",&input);
	for(int x=input;x>0;x=x/10)
	{
		int number = x%10;
		for(int i=0;i<=number;i++)
		{
			if(i*i == number)
			{
				count++;
			}
		}
	}
	printf("%d\n",count);
}



