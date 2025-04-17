#include<stdio.h>
void main ()
{
	int x,x1,x2,sum=0;
	
	for(x=9;x<100;x++)
	{
		if(x%2 != 0 && x/10 == 7)
		{	
			sum = sum + x;
		}
		
	}
		printf("%d\n",sum);
}


