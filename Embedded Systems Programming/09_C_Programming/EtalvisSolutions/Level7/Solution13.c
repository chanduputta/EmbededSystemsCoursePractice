#include<stdio.h>
int disp_reverse_number(int);
int main()
{
	int x,y;
	printf("Enter a multi Digit Number: ");
	scanf("%d",&x);
	y = disp_reverse_number(x);
	printf("Reverse of the given number is %d\n",y);
}

int disp_reverse_number(int x)
{
	int num = 0;
	for(;x>0;x=x/10)
	{
		num = num*10+x%10;
	}
	return num;
}
