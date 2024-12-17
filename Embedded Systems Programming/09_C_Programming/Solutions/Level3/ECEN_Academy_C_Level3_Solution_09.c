#include<stdio.h>
int swap_digits(int no);
int main()
{
	int number, result;
	printf("Enter two digit number:");
	scanf("%d",&number);
	result = swap_digits(number);
	printf("%d",result);
	return 0;
}
int swap_digits(int no)
{
	int result,n1,n2;
	n1 = no%10;
	n2 = no/10;
	result = n1*10+n2;

	return result;
}
