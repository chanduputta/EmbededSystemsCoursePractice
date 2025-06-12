#include<stdio.h>
int disp_2digit_ones5(int);
int main ()
{
	int x,y;
	printf("program to print sum of two-digit numbers whose one's digit is 5\n"); 
	//scanf("%d",&x);
	y = disp_2digit_ones5(5);
	printf("%d\n",y);
}
int disp_2digit_ones5(int a)
{
	int y=0;
	for(int i=10; i<100;i++)
	{
		if(i%10 == 5)
			y =y+i;
	}
	return (y);
}
	
