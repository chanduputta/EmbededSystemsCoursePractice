#include <stdio.h>
int main()
{
	int x,x1,x2=0;
	x=10;
loop: if(x<100)
      {
	      x1=x%10;
	      if(x1==5)
		x2=x+x2;

	      x++;
	      goto loop;
      }
      printf("%d",x2);
}
	      
