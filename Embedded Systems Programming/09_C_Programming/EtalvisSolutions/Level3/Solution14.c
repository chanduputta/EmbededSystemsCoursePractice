#include<stdio.h>
void main ()
{
	int User_input;
	printf("Please enter an four digit Integer :");
	scanf("%d",&User_input);
	if(User_input/100 == User_input%100)
	{
		printf("Success");
	}
	else
	{
		printf("Failure");
	}
}







