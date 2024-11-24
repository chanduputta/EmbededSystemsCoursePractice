#include<stdio.h>
int main()
{
	int x,x1,x2,x3,xn=0;
	printf("Enter 2 digit number:");
	scanf("%d",&x);
	//printf("x value %d\n",x); //test purpose
	for(int i = 1 ; i<=x; i++)
	{
		if(x%i == 0)  
		{
			xn++;
		}
	}

	//printf("x value %d",x); //test 
	x1=x%10;
	x2=x/10;
	x3=x1+x2;
	//printf("sum od digits %d\n",x3); //test	
	if(xn>2 & x3==14 )
		printf("Not Prime but sum of digits is 14");
	else if(xn<=2 & x3==14)
		printf("Prime & Sum of digits is 14");
	else if(xn>2 & x3!=14)
		printf("Not Prime & Sum of Digits is not 14");
	else
		printf("Prime,but sum of Digits is not 14");


}



