/* For the asked Question Expected answer(375) is wrong */
#include<stdio.h>
#define limit 100
int main()
{
	int x,x1,sum=0;
	x=11;
	x1=11;
loop1: if(x < limit)
      {	
	loop2: if(x1 < limit)
	       { sum = x+x1;
	      	if((sum/10)%10 == 7)
	     	{
			printf("%d\n",sum);
		}
		x1=x1+2;
		goto loop2;
	       }
	x=x+2;
	goto loop1;
      }
}


