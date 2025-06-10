#include<stdio.h>
void disp_biggest_4digit_div7_9();
int main ()
{
	disp_biggest_4digit_div7_9();
}

void disp_biggest_4digit_div7_9()
{
	int x=1;	
	printf("displaying biggest 4 digit number which is divisable by 7 & 9: ");
	for(int i=1;i<=9999;i++)
	{
		if( i%7==0 && i%9==0 )
		{
		 	x = i;	
		}
	}
	printf("%d\n",x);
}
