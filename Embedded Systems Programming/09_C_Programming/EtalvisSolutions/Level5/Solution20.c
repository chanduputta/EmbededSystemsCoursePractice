#include<stdio.h>
void main ()
{
	int input=0,n=0;
	printf("Enter a number as input : ");
	scanf("%d",&input);
	for(int X=input;X>0;X=X/10)
	{
		int input1=X%10,count=0;

		for(int x=1;x<=input1;x++)
		{
			if(input1%x == 0)
			{
				count++;

			}
		}

		if(count == 2)
		{
			//printf("Prime\n");
			n++;
		}
		else
		{
			//printf("Not Prime\n");
			//ignore
		}
	}
	
	printf("%d\n",n);
}



