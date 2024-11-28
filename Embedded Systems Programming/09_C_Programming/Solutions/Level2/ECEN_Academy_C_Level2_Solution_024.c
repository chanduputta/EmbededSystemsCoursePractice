#include<stdio.h>
int main()
{
	int x,x1,xn=0,xsq=0;
	scanf("%d",&x);
loop:if(x>0)
     {
	     x1=x%100;
	     // printf("x1 = %d\n",x1);
	     for(int i = 1;i<=x1;i++)
	     {
		     if(x1%i == 0)
		     {
			     xn++ ; //collecting number of Factors
		     }
	     }

	     if(xn%2!=0 & x1>9)  //if number of factors is odd then it is perfect square 
	     {	
		     xsq++;
	     }
	     //printf("%d\n",xn);
	     xn = 0;//reset
	     x = x/10;
	     goto loop;
	}

     printf("%d",xsq);
}


