#include <stdio.h>
int main()
{
	int x,xo=0,x1,x2;
	scanf("%d",&x);
for(;x>0;x=x/10)
     {
	     x1=x%100;
	     if(x1%2!=0 & x1>9)
	     {

		     printf("%d\n",x1);
		     xo++;
	     }
     }
     printf("%d",xo);
}

