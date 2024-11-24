#include<stdio.h>
int main()
{
	int x=11,x1=0,x2=0;
loop: if(x<100)
      {
      x1=x/10;
      if(x1==7)
      {
	      x2 = x2+x;
      }
	x =x+2;
	goto loop;
      }
      printf("%d",x2);
}
