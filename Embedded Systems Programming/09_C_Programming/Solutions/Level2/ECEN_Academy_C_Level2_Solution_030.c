#include<stdio.h>
int main ()
{
	int x,x1,x2,xh;
	printf("Enter two numbers:");
	scanf("%d%d",&x1,&x2);
	xh = (x1>x2)? x1:x2;
	for(int i =1;i<=xh;i++)
	{
		if(x1%i == 0 && x2%i == 0)
			x = i;

	}
	printf("%d",x);

}


