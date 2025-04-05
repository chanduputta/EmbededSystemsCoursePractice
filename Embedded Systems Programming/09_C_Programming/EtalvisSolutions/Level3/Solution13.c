#include<stdio.h>
void main ()
{
	int User_input,digit0,digit1;
	printf("Please enter an four digit Integer :");
	scanf("%d",&User_input);
	digit0 = User_input%10;
	digit1 = (User_input%100)/10;
	if(digit0 == digit1)
	{
		printf("Success");
	}
	else
	{
		printf("Failure");
	}
}







