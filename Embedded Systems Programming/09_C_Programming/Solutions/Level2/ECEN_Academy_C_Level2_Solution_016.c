#include<stdio.h>
int main()
{
	int x,xn=0;
	scanf("%d",&x);
	for(int i = 1 ; i<=x; i++)
	{
		if(x%i == 0)  
		{
			xn++;
		}
	}
	
	if(xn >2)
		printf("Not Prime");
	else
		printf("Prime");
}



