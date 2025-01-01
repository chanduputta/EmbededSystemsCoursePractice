#include<stdio.h>
int main()
{
	int x,y=0,y1;
	printf("Enter a Number : ");
	scanf("%d",&x);
loop:if(x>0)
	     {  y1=x%10;
		y = y*10+y1;
		x = x/10;
		goto loop;

	     }

	printf("The reverse of the entered number is %d\n",y);
}
