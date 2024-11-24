#include <stdio.h>
int main ()
{
	int x=0,x1=0;

loop: if(x<6)
      {
	      x1=x+x1;
	      x++;

	      goto loop;
      }
      printf("%d",x1);
}


