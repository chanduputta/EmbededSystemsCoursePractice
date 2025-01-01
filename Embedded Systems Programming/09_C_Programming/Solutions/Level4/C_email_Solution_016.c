//Total number of three digit odd numbers
#include <stdio.h>
int main()
{
	int x,y=0,y1;
	printf("Enter the Number : ");
	scanf("%d",&x);
	loop: if(x>9)
	      {
		      y1 = x%1000;
		      if(y1%2 !=0)
			      y++;
		      x = x/10;
		      goto loop;
	      }
	printf("Total number of three digit odd numbers of entered number is %d\n",y);
}
