#include<stdio.h>
int main ()
{
	int x;
	x=0;
loop: if(x<10)
      {
	      if(x%2!=0)
	      {
		      printf("%d\n",x);
	      }
	      x++;
	      goto loop;
      }
}
