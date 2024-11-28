#include <stdio.h>
int main()
{
	int x,x1,xp=0,xn;
	scanf("%d",&x);
loop:if(x>0)
     {	
	     x1=(int)(x%10);
	     x = (int)(x/10);
	if(x1%2!=0)
	{	
		printf("%d",x1); //test
		xp++;
	}
		goto loop;
      }
	printf("%d",xp);
}

