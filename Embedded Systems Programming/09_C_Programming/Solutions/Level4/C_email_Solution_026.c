//smalles three digit Prime number
#include <stdio.h>
int isPrime(int no);
int main()
{
	int a=0,x,y=0,y1;
	printf("Enter the Number : ");
	scanf("%d",&x);
	loop: if(x>0)
	      {
		      y1 = x%1000;
		      int x1=1,y2,x2=0;
		      loop1: if(x1<=y1)
			     {
				y2 = y1%x1;
				if(y2 == 0)
					x2++;
				x1++;
				goto loop1;
			     }
			if(x2<=2) //records prime numbers;
			{
				y=(y1<a)?y1:a;
				a=y1;
			}

		      x = x/10;
		      goto loop;
	      }
	printf("smallest three digit Prime number of entered number is %d\n",y);
}




