#include<stdio.h>
int main()
{
	int x,xn=0;
	x=5;
loop:if(x>0)
     {
	     xn = xn+x;
	     x--;
	     goto loop;
     }
     printf("%d",xn);
}
