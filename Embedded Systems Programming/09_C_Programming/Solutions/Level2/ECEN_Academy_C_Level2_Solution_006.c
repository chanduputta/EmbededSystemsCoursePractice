#include <stdio.h>
int main ()
{
	int x;
	x= 1;
loop: if(x<10)
      {
	      printf("%d\n",x+10);
	      x=x+2;
	      goto loop;
      }
}	
