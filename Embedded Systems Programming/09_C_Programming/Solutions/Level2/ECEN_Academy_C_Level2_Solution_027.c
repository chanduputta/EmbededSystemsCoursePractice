#include<stdio.h>
int main ()
{
	int x=1,x1,xk,xn=0,xc = 0;
for(x=1;x<100000;x++)
     {  
	     xk = x;
loop: if(xk>0)
	{
	     x1=xk%10;
	     xn = xn+x1;
	     xk = xk/10;
	     goto loop;
	}
	if(xn == 14)
	{	xc++;}

	xn = 0; //reset
	
     }

     printf("%d",xc);
}
