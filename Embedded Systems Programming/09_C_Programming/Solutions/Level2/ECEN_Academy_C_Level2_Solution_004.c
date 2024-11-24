#include<stdio.h>
int main()
{
	int x=6;
	int x1=0;
loop: if(x>0)
      {
	      
	      x1 = x1+x;
	      x--;
	      goto loop;
      }
      printf("%d",x1);
}
