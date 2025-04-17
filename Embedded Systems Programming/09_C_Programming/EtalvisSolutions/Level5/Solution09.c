#include<stdio.h>
void main ()
{
	int x,x1,x2,sum=0;
	
	for(x=9;x<100;x++)
	{
		if(x%10 == 5)
		{	
			sum = sum + x;
		}
		
	}
		printf("%d\n",sum);
}


