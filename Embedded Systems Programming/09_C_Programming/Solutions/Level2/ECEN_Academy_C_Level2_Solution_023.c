#include<stdio.h>
int main()
{
	int x,x1,xn=0,xsq=0;
	scanf("%d",&x);
loop:if(x>0)
     {
	     x1=x%10;
	     //printf("x1 = %d\n",x1);
	     for(int i = 1;i<=x1;i++)
	     {
		     if(x1%i == 0)
		     {
			     xn++ ; //collecting Factors
		     	    // printf("factors xn = %d\n",xn);
		     }
	     }

	     if(xn%2!=0)  //if number factors is odd then its perfect square
	     {	
		     //printf("x1=%d\n",x1);
		     xsq++;
	     }
	     xn = 0;//reset
	     x = x/10;
	     goto loop;
	}

     printf("%d",xsq);
}


