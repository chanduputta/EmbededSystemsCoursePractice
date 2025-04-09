#include<stdio.h>
int main()
{
	int x,count=0;
	printf("Enter a input number:");
	scanf("%d",&x);
loop: if(x > 0)
      {
	      x = x/10;
	      //printf("%d\n",x);
	      count++;
	      goto loop;
      }
      printf("%d\n",count);
}
