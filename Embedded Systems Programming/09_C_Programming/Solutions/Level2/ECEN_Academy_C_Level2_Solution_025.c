#include<stdio.h>
int main()
{
	int x,x1,xn=0,xp=0;
	scanf("%d",&x);
	loop:if(x>0)
	     {
		     x1=x%10;
		     x=x/10;
		     for(int i = 1; i<=x1; i++)
		     {
			     if(x1%i == 0)
			     {
				     xn++;
			     }
		     }
		if (xn == 2)
			xp++;

		xn = 0;
		goto loop;
		}
	     printf("%d",xp);
}
