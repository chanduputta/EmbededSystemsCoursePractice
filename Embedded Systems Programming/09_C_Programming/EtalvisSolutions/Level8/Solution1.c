#include<stdio.h>
int disp_sum(int);
int main ()
{
	int x,y;
	printf("Enter an Integer to print its sum [Hint: enter '5' to print sum of 1 to 5 ] : "); 
	scanf("%d",&x);
	y = disp_sum(x);
	printf("%d\n",y);
}
int disp_sum(int a)
{
	int y=0;
	for(int i=0; i<=a;i++)
	{
		y =y+i;
	}
	return (y);
}
	
