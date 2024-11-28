#include <stdio.h>
int main()
{
	int x,x1,x2,xn=0;
	printf("Enter a 4 digit number:");
	scanf("%d",&x);
	x1 = x/10;
	x2 = x1%100;
	for(int i = 1; i<=x; i++)
	{
		if(x2%i == 0)
		{
			xn++;
		}
	}
	

	if((xn>2))
		printf("Not Prime");
	else
		printf("Prime");
}

