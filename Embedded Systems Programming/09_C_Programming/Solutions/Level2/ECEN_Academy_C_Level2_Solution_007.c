#include<stdio.h>
int main()
{
	int x,x1,x2,x3;
	x=11;
loop: if(x<100)
      {
	      
	      x1=x%10;
	      x2=x/10;
	      x3=x1+x2;
	      if(x3==7)
	      {	      
		printf("%d\n",x);
		      
	      }
	     x= x+2;
	      goto loop;
      }
}

