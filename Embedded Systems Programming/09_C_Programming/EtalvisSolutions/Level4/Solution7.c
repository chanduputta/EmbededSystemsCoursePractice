#include<stdio.h>
#define limit 100
int main()
{
	int x;
	x=9;
loop: if(x < limit)
      {	
	      x=x+2;
	      if(x%10 + x/10 == 7)
	      {
		printf("%d\n",x);
	      }
	      goto loop;
      }
}


