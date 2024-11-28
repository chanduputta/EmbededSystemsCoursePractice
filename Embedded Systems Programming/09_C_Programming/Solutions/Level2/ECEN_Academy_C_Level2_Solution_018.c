#include <stdio.h>
int main()
{
	int x,x1,xn=0;
	scanf("%d",&x);
	x1 = x%100;
	for(int i = 1; i<=x; i++)
	{
		if(x1%i == 0)
		{
			xn++;
		}
	}
	

	if((xn>2))
		printf("Not Prime");
	else
		printf("Prime");
}

