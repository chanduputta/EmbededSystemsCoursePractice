//sum of all two digit odd numbers
#include <stdio.h>
int main()
{
	int x,y=0,y1;
	printf("Enter the Number : ");
	scanf("%d",&x);
	loop: if(x>0)
	      {
		      y1 = x%100;
		      if(y1%2 !=0)
			      y=y+y1;
		      x = x/10;
		      goto loop;
	      }
	printf("sum of all two digit odd numbers of entered number is %d\n",y);
}
