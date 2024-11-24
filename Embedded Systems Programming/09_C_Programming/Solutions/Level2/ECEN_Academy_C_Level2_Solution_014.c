#include<stdio.h>
#include<math.h>
int main()
{
	int x,xn=1,x1,x2,x3,xf,xd,xs;
	scanf("%d",&x);
	x1=x%10;printf("first digit = %d\n",x1);
	xd=x;
loop:if(xd>10)
     {
	xd=xd/10;
	xn= xn*10;
	goto loop;
     }

	
     	xf = x/xn;//printf("last digit = %d\n",xf);
	x2=x%xn;
	x3=x2/10;//printf("Midle numbers = %d\n",x3);
     xs = x1*xn+x3*10+xf;
     printf("%d",xs);
}



