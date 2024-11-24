#include <stdio.h>
int main()
{
	int x,x1=0,x2=0;
	scanf("%d",&x);
	loop:if(x>0)
	     {
		     x1 = x%10;
		     x2 = x2+x1;
		     x = x/10;
		     goto loop;
	     }

	printf("%d",x2);
}

