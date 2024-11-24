#include <stdio.h>
int main ()
{
	int x,x1=0;
	scanf("%d",&x);
loop:if(x>0)
     {
	     x1++;
	     x = x/10;

	     goto loop;
     }
	printf("%d",x1);
}
