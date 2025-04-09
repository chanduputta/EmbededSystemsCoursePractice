#include<stdio.h>
int main()
{
	int x,sum;
	x=6;
	sum=0;
loop: if(x > 1)
      {	
	      x--;
	      sum = sum + x;
	      goto loop;
      }
      printf("%d",sum);
}
