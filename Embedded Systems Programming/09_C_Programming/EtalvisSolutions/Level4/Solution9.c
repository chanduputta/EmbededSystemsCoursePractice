#include<stdio.h>
#define limit 100
int main()
{
	int x;
	x=10;
loop: if(x < limit)
      {	
	      if(x%10 + x/10 == 6)
	      {
		printf("%d\n",x);
	      }
	      x=x+2;
	      goto loop;
      }
}


