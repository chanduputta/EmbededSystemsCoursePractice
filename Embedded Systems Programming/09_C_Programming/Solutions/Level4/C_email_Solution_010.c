#include<stdio.h>
int main()
{
	int x,y1,y=0;
	printf("Enter a THREE digit Number:");
	scanf("%d",&x);
	loop: if(x>0)
	      {
		      y1 = x%10;
		      y=y+y1;
		      x=x/10;
		      goto loop;
	      }
	printf("The sum of the digits of entered number is %d\n",y);
}
