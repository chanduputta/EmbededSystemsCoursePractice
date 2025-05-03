#include<stdio.h>
int main()
{
	printf("Program to print total number of single digit Prime numbers. \n\n");
	int x=0,input=0,input1=0,counter=0,Result=0;
	printf("Enter a number :  ");
	scanf("%d",&input);
	while( input > 0)
	{
		input1 = input%10;
		while(x <= input1)
		{
			x++;
			if(input1%x == 0)
			{
				counter++;
			}
			
		}
		if( counter == 2)
		{	
			Result++;
		}
		x=0;
		counter=0;
		input=input/10;
	}

	printf("%d\n",Result);

}
