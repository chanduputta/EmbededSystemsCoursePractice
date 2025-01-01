//Total number of single digit odd numbers
#include <stdio.h>
int main()
{
	int x,y=0,y1;
	printf("Enter the Number : ");
	scanf("%d",&x);
	loop: if(x>0)
	      {
		      y1 = x%10;
		      if(y1%2 !=0)
			      y++;
		      x = x/10;
		      goto loop;
	      }
	printf("Total number of single digit odd numbers of entered number is %d\n",y);
}
