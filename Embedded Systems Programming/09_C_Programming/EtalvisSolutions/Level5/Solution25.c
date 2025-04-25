#include<stdio.h>
void main ()
{
	int input=0,result=0;
	printf("Enter a number as input : ");
	scanf("%d",&input);
	for(int x=input;x>0;x=x/10)
	{
		int number = x%10, count = 0;
		for(int i=1;i<=number;i++)
		{
			if(number%i == 0)
			{
				count++;
			}
		}
	 if (count == 2)
		 result++;
	}
	printf("%d\n",result);
}



