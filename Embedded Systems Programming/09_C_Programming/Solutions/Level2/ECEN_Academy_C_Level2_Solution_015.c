#include<stdio.h>
#include<math.h>
int main()
{
	int x,xn=1,x1,x2,xf,xf1,xd,xs;
	scanf("%d",&x);
	x1=x%10;//printf("first digit = %d\n",x1);
	if(x1%2 == 0)
	{
		printf("%d",x);
	}
	else
	{

	xd=x;
loop:if(xd>10)
     {
	xd=xd/10;
	xn= xn*10;
	goto loop;
     }

	
     	xf = x/xn;//printf("last digit = %d\n",xf);
	xf1 = xf-1;//printf("Modified last Digit = %d\n",xf1);
	x2=x%xn;// printf("remaining numbers = %d\n",x2);
     	xs = xf1*xn+x2;
     	printf("%d",xs);
	}
}


