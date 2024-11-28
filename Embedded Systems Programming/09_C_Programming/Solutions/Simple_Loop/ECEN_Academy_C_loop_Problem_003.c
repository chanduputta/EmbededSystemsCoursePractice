#include<stdio.h>
int main ()
{
	int x,xn = 0;
	x=1;
loop:if(x<6)
     {
	     xn = xn + x;
	     x++;
	     goto loop;
     }
     printf("%d",xn);
}
