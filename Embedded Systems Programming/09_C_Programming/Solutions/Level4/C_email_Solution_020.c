//Total number of single digit Prime numbers assume 0 & 1 are not Prime numbers
#include <stdio.h>
int isPrime(int no);
int main()
{
	int x,y=0,y1;
	printf("Enter the Number : ");
	scanf("%d",&x);
	loop: if(x>0)
	      {
		      y1 = x%10;
		      int x1=1,y2,x2=0;
		      loop1: if(x1<=y1)
			     {
				y2 = y1%x1;
				if(y2 == 0)
					x2++;
				x1++;
				goto loop1;
			     }
			if(x2==2) //records only if number have 2 multiples to escape 0 and 1;
				y++;

		      x = x/10;
		      goto loop;
	      }
	printf("Total number of single digit Prime numbers of entered number is %d\n",y);
}




