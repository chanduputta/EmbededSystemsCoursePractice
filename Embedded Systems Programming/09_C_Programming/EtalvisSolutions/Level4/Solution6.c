#include<stdio.h>
#define limit 20
int main()
{
	int x;
	x=1;
	x=x+10;
loop: if(x < limit)
      {	
	      
	printf("%d\n",x);
	      x=x+2;
	      goto loop;
      }
}


