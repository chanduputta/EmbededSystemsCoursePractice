#include<stdio.h>
int main()
{
	printf("Program to print whether given number's first two digits (ten's digits and one's digit) is prime. \n\n");
	int x=1,input=0,input1,counter=0;
	printf("Enter a number :  ");
	scanf("%d",&input);
	input1=input%100;
	while(x <= input1)
	{

		if(input1%x == 0)
		{
			counter++;
		}
		x++;
	}
//	printf("%d\n",counter);
	if (counter == 2)
	{
		printf("prime\n");
	}
	else
	{
		printf("Not prime\n");
	} 
}
