#include<stdio.h>
void main ()
{
	int User_input;
	printf("Please enter an two digit Integer :");
	scanf("%d",&User_input);
	if(User_input%10 != User_input/10)
	{
		printf("Success");
	}
	else
	{
		printf("Failure");
	}
}



