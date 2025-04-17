#include<stdio.h>
void main ()
{
	int x,x1,x2;
	
	for(x=0;x<100;x++)

	{
		if(x>9 && x%2==0)
		{ 
			x1=x%10;
			x2=x/10;
			if(x1+x2 == 6)
			{		printf("%d\n",x);}
		}
	}
}

